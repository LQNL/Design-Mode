#pragma once

#include <iostream>
#include "Product.hpp"

class ConcreteProduct1 : public Product
{
public:
    ConcreteProduct1(/* args */) = default;
    std::string Operation() const override{
        return "{Result of the ConcreteProduct1}";
    }
    
};
