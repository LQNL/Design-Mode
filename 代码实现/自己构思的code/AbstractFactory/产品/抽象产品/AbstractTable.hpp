#pragma once

class AbstractTable
{
public:
    virtual ~AbstractTable(){};
    virtual void get_table() = 0;
};
