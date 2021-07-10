#pragma once

#include "../Builder/Builder.hpp"

class Director
{
public:
    void set_builder(Builder* builder){
        builder_= builder;
    }

    void set_chair(){
        builder_->builder_chair();
    }
    void set_table(){
        builder_->builder_table();
    }

    void set_all(){
        builder_->builder_chair();
        builder_->builder_table();
    }

    ~Director(){};
private:
    Builder* builder_;
};
