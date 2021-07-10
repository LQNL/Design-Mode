#pragma once

#include <iostream>
#include <string>
#include <vector>

class Suite
{
public:
    void List_element() const{
        std::cout << "Suite parts: ";
        for(const auto& e : element){
            std::cout << e << "     ";
        }
        std::cout << std::endl;
    }
    void add_element(std::string str){
        element.push_back(str);
    }
private:
    std::vector<std::string> element;
};