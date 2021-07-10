#pragma once

#include "../抽象工厂/AbstractFactory.hpp"
#include "../../产品/产品风格/ChairChinaStyle.hpp"
#include "../../产品/产品风格/TableChinaStyle.hpp"

class FactoryTwo : public AbstractFactory{
public:
    virtual ~FactoryTwo(){}
    virtual AbstractChair* Make_Chair(){
        return new ChairChinaStyle();
    }
    virtual AbstractTable* Make_Table(){
        return new TableChinaStyle();
    }

};