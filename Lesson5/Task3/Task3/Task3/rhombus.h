#pragma once

#include "shape.h"

class rhombus : public shape {
protected:
    int a;
    int angle1, angle2;

public:
    rhombus(int a, int A, int B);
    void print_info() override;
};
