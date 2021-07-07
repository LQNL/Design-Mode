/**
 * It makes sense to use the Builder pattern only when your products are quite
 * complex and require extensive configuration.
 *
 * Unlike in other creational patterns, different concrete builders can produce
 * unrelated products. In other words, results of various builders may not
 * always follow the same interface.
 */
#pragma once
#include <vector>
#include <string>
#include <iostream>

class Product1{
public:
    std::vector<std::string> parts_;

    void ListParts() const {
        std::cout << "Product parts: ";
        for(size_t i = 0; i < parts_.size(); i++){
            if(parts_[i] == parts_.back()){
                std::cout << parts_[i];
            }else{
                std::cout << parts_[i] << ", ";
            }
        }
        std::cout << "\n\n";
    }
};