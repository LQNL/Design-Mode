#pragma once

#include "../抽象工厂/AbstractFactory.hpp"
#include "../../产品/产品风格/TableEnglishStyle.hpp"
#include "../../产品/产品风格/ChairEnglishStyle.hpp"


class FactoryOne : public AbstractFactory{
public:
    virtual ~FactoryOne(){}
    virtual AbstractChair* Make_Chair(){
        return new ChairEnglishStyle();
    }
    virtual AbstractTable* Make_Table(){
        return new TableEnglishStyle();
    }
};