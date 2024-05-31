#pragma once

#include "rectangle.h"

class square : public rectangle {
public:
    square(int side);
    void print_info() override;
};
