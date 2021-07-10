#pragma once

#include "Builder.hpp"
#include "../Product/Suite.hpp"

class BuilderChina : public Builder
{
public:
    BuilderChina() : suite{new Suite()} {

    }
    virtual ~BuilderChina(){
        delete suite;
    };

    virtual void builder_chair(){
        suite->add_element("中国风---椅子");
    }
    virtual void builder_table(){
        suite->add_element("中国风---桌子");
    }
    Suite* get_result(){
        Suite* ret = suite;
        suite = new Suite();
        return ret;
    }
private:
    Suite* suite;
};
