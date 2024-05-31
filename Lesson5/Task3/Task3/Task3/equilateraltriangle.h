#pragma once

#include "triangle.h"

class equilateraltriangle : public triangle {
public:
    equilateraltriangle(int side);
    void print_info() override;
};
