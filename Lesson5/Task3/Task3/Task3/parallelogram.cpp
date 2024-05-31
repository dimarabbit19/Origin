#include "parallelogram.h"
#include <iostream>

parallelogram::parallelogram(int a, int b, int A, int B) {
    if (a > 0 && b > 0 && A > 0 && B > 0) {
        this->countsides = 4;
        this->name = "��������������";
        this->a = a;
        this->b = b;
        this->angle1 = A;
        this->angle2 = B;
    }
    else {
        std::cout << "������ �����\n";
        exit(1);
    }
}

void parallelogram::print_info() {
    std::cout << name << "\n";
    std::cout << "���������� ������: " << countsides << "\n";
    std::cout << "�������: a = " << a << ", b = " << b << "\n";
    std::cout << "����: A = " << angle1 << ", B = " << angle2 << "\n";
}