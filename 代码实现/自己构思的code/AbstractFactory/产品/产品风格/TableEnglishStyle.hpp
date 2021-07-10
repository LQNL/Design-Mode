#pragma once

#include "../抽象产品/AbstractTable.hpp"
#include <iostream>

class TableEnglishStyle final : public AbstractTable {
public:
    virtual void get_table() override{
        std::cout << "英国风---桌子\n";
    }
};