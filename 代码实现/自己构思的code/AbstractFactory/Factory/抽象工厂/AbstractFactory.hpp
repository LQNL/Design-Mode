#pragma once

#include "../../产品/抽象产品/AbstractChair.hpp"
#include "../../产品/抽象产品/AbstractTable.hpp"

class AbstractFactory{
public:
    virtual ~AbstractFactory(){};
    virtual AbstractChair* Make_Chair() = 0;
    virtual AbstractTable* Make_Table() = 0;
};