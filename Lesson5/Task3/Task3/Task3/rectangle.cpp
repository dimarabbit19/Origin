#include "rectangle.h"
#include <iostream>

rectangle::rectangle(int a, int b) {
    if (a > 0 && b > 0) {
        this->countsides = 4;
        this->name = "�������������";
        this->a = a;
        this->b = b;
    }
    else {
        std::cout << "������ �����\n";
        exit(1);
    }
}

void rectangle::print_info() {
    std::cout << name << "\n";
    std::cout << "���������� ������: " << countsides << "\n";
    std::cout << "�������: a = " << a << ", b = " << b << "\n";
}