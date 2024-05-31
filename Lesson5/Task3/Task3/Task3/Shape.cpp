#include "shape.h"
#include <iostream>

shape::shape() : countsides(0), name("null") {}

void shape::print_info() {
    std::cout << name << "\n";
    std::cout << "Количество сторон: " << countsides << "\n";
}

shape::~shape() = default;