#include "equilateraltriangle.h"

equilateraltriangle::equilateraltriangle(int side) : triangle(side, side, side, 60, 60, 60) {
    this->name = "�������������� �����������";
}

void equilateraltriangle::print_info() {
    triangle::print_info();
}