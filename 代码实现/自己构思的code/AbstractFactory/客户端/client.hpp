#include "../产品/抽象产品/AbstractTable.hpp"
#include "../产品/抽象产品/AbstractChair.hpp"
#include "../Factory/抽象工厂/AbstractFactory.hpp"

void client(AbstractFactory& factory){
    AbstractTable* table = factory.Make_Table();
    AbstractChair* chair = factory.Make_Chair();
    table->get_table();
    chair->get_chair();
    delete table;
    delete chair;
}