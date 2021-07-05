#include "Creator.hpp"

#pragma once
#include "Creator.hpp"
#include "../Product/ConcreteProduct2.hpp"
class ConcreteCreator2 : public Creator
{
private:
    /* data */
public:
    ConcreteCreator2(/* args */) = default;
    Product* FactoryMethod()const override{
        return new ConcreteProduct2();
    }
};