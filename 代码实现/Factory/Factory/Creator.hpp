#pragma once
#include "../Product/Product.hpp"

class Creator
{
private:
    /* data */
public:
    Creator(/* args */) = default;
    virtual ~Creator(){};
    virtual Product* FactoryMethod()const = 0;

    std::string SomeOperation() const {
        Product* product = FactoryMethod();
        std::string result = "Creator: The same creator's code has just worked with " + product->Operation();
        delete product;
        return result;
    }
};
