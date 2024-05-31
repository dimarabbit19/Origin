#pragma once

#include <string>

class shape {
protected:
    std::string name;
    int countsides;

public:
    shape();
    virtual void print_info();
    virtual ~shape();
};
