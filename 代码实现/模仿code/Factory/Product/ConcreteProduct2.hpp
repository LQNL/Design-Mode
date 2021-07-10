#pragma once
#include <iostream>
#include "Product.hpp"

class ConcreteProduct2 : public Product
{
public:
    ConcreteProduct2(/* args */) = default;
    std::string Operation() const override{
        return "{Result of the ConcreteProduct2}";
    }
    
};
