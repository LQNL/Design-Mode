#pragma once
#include "Creator.hpp"
#include "../Product/ConcreteProduct1.hpp"
class ConcreteCreator1 : public Creator
{
private:
    /* data */
public:
    ConcreteCreator1(/* args */) = default;
    Product* FactoryMethod()const override{
        return new ConcreteProduct1();
    }
};