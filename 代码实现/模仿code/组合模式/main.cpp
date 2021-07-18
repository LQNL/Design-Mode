#include <algorithm>
#include <iostream>
#include <list>
#include <string>


/**
 * The base Component class declares common operations for 
 * both simple and complex objects of a composition
*/
class Component{
protected:
    Component *parent_;

/**
 * Optionally, the base Component can declare an interface for setting
 *  and accessing a parent of the component in a tree structure.
 * It can alse provide some default implementation for these methods.
*/
public:
    virtual ~Component() {}
    void SetParent(Component *parent){
        this->parent_ = parent;
    }
    Component* GetParent() const{
        return this->parent_;
    }

    virtual void Add(Component* component) {}
    virtual void Remove(Component* component) {}

/**
 * You can provide a method that lets the client code figure out
 * whether a component can bear children.
*/
    virtual bool IsComposite() const {
        return false;
    }

/**
 * The base Component may implement some default behavior or leave
 * it to concrete classes ( by declaring the method containing the 
 * behavior as "abstract" ).
*/
    virtual std::string Operation() const = 0;

};

/**
 * The leaf class represents the end objects of a compostion. A leaf
 * can't have any children.
 * 
 * usually,it's the leaf objects that do the actual work,whereas 
 * Composite objects only delegate to their sub-components.
*/
class Leaf : public Component{
public:
    std::string Operation() const override{
        return "Leaf";
    }
};


/**
 *  The Composite class represent the complex components that may
 * have children. Usually,the Composite objects delegate the actual
 * work to their childern and then "sum-up" the result
*/
class Composite : public Component{
protected:
    std::list<Component*> children_;
public:
    void Add(Component* component) override{
        this->children_.push_back(component);
        component->SetParent(this);
    }

    void Remove(Component* component) override{
        children_.remove(component);
        component->SetParent(nullptr);
    }

    bool IsComposite() const override{
        return true;
    }

    std::string Operation() const override{
        std::string result;
        for(const Component *c : children_){
            if(c == children_.back()){
                result += c->Operation();
            } else {
                result += c->Operation() + "+";
            }
        }
        return "Brabch(" + result + ")";
    }
};

void ClientCode(Component* component){
    std::cout << "RESULT: "<< component->Operation();
}

void ClientCode2(Component* component1, Component* component2){
    if(component1->IsComposite()){
        component1->Add(component2);
    }
    std::cout << "RESULT: " <<component1->Operation();
}

int main(){

    Component* simple = new Leaf;
    std::cout << "Client: I've got a simple component:\n";
    ClientCode(simple);
    std::cout << "\n\n";

    /**
     *  ... as well as the complex composites
    */
    Component* leaf_1 = new Leaf;
    Component* leaf_2 = new Leaf;
    Component* leaf_3 = new Leaf;


    Composite* branch1 = new Composite;
    branch1->Add(leaf_1);
    branch1->Add(leaf_2);

    Composite* branch2 = new Composite;
    branch2->Add(leaf_3);

    Component* tree = new Composite;
    tree->Add(branch1);
    tree->Add(branch2);

    std::cout << "Client: Now I've got a composite tree:\n";
    ClientCode(tree);
    std::cout << "\n\n";

    std::cout << "Client: I don't need to check the components classes even when managing the tree:\n";
    ClientCode2(tree, simple);
    std::cout << "\n";

    delete simple;
    delete tree;
    delete branch1;
    delete branch2;
    delete leaf_1;
    delete leaf_2;
    delete leaf_3;

    return 0;
}