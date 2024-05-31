#pragma once

#include "triangle.h"

class righttriangle : public triangle {
public:
    righttriangle(int a, int b, int c, int A, int B);
    void print_info() override;
};
