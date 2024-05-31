#pragma once

#include "triangle.h"

class isoscelestriangle : public triangle {
public:
    isoscelestriangle(int a, int b, int A, int B);
    void print_info() override;
};
