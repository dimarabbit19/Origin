#include "triangle.h"
#include <iostream>

triangle::triangle(int a, int b, int c, int A, int B, int C) {
    if (a > 0 && b > 0 && c > 0 && A > 0 && B > 0 && C > 0) {
        this->countsides = 3;
        this->name = "�����������";
        this->a = a;
        this->b = b;
        this->c = c;
        this->angle1 = A;
        this->angle2 = B;
        this->angle3 = C;
    }
    else {
        std::cout << "������ �����\n";
        exit(1);
    }
}

void triangle::print_info() {
    std::cout << name << "\n";
    std::cout << "���������� ������: " << countsides << "\n";
    std::cout << "�������: a = " << a << ", b = " << b << ", c = " << c << "\n";
    std::cout << "����: A = " << angle1 << ", B = " << angle2 << ", C = " << angle3 << "\n";
}