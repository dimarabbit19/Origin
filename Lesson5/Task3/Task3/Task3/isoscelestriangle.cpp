#include "isoscelestriangle.h"

isoscelestriangle::isoscelestriangle(int a, int b, int A, int B) : triangle(a, b, a, A, B, A) {
    this->name = "�������������� �����������";
}

void isoscelestriangle::print_info() {
    triangle::print_info();
}