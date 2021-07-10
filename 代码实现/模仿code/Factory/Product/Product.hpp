#pragma once

#include <string>

class Product
{
public:
    Product() = default;
    virtual ~Product();
    virtual std::string Operation() const = 0;
};

Product::~Product()
{
    
}
