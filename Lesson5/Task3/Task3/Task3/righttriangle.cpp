#include "righttriangle.h"

righttriangle::righttriangle(int a, int b, int c, int A, int B) : triangle(a, b, c, A, B, 90) {
    this->name = "Прямоугольный треугольник";
}

void righttriangle::print_info() {
    triangle::print_info();
}