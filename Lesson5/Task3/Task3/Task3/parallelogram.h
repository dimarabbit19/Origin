#pragma once

#include "shape.h"

class parallelogram : public shape {
protected:
    int a, b;
    int angle1, angle2;

public:
    parallelogram(int a, int b, int A, int B);
    void print_info() override;
};
