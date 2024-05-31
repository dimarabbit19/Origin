#pragma once

#include "shape.h"

class rectangle : public shape {
protected:
    int a, b;

public:
    rectangle(int a, int b);
    void print_info() override;
};
