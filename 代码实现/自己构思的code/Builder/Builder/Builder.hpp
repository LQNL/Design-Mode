#pragma once

class Builder
{
public:
    virtual void builder_chair() = 0;
    virtual void builder_table() = 0;
    virtual ~Builder(){};
};