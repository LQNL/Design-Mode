#pragma once

/**
 * The Director is only responsible for executing the building steps in a
 * particular sequence. It is helpful when producing products according to a
 * specific order or configuration. Strictly speaking, the Director class is
 * optional, since the client can control builders directly.
 */

#include "Builder.hpp"

class Director{
public:
    /**
     * The Director works with any builder instance that the client code passes
     * to it. This way, the client code may alter the final type of the newly
     * assembled product.
     */
    void set_builder(Builder* builder){
        this->builder = builder;
    }

        /**
     * The Director can construct several product variations using the same
     * building steps.
     */
    void BuildMinimalViableProduct(){
        this->builder->ProducePartA();
    }

    void BuildFullFeatureProduct(){
        this->builder->ProducePartA();
        this->builder->ProducePartB();
        this->builder->ProducePartC();
    }
private:
    Builder* builder;
};