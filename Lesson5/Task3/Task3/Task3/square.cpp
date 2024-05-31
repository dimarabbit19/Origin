#include "square.h"

square::square(int side) : rectangle(side, side) {
    this->name = " вадрат";
}

void square::print_info() {
    rectangle::print_info();
}