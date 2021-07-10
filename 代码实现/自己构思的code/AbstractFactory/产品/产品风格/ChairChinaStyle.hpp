#pragma once

#include "../抽象产品/AbstractChair.hpp"
#include <iostream>

class ChairChinaStyle final : public AbstractChair {
public:
    virtual void get_chair() override{
        std::cout << "中国风---椅子\n";
    }
};