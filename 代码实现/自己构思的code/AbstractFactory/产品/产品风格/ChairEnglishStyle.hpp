#pragma once

#include "../抽象产品/AbstractChair.hpp"
#include <iostream>

class ChairEnglishStyle final : public AbstractChair {
public:
    virtual void get_chair() override{
        std::cout << "英国风---椅子\n";
    }
};