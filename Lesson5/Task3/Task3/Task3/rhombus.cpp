#include "rhombus.h"
#include <iostream>

rhombus::rhombus(int a, int A, int B) {
    if (a > 0 && A > 0 && B > 0) {
        this->countsides = 4;
        this->name = "����";
        this->a = a;
        this->angle1 = A;
        this->angle2 = B;
    } else {
        std::cout << "������ �����\n";
        exit(1);
    }
}

void rhombus::print_info() {
    std::cout << name << "\n";
    std::cout << "���������� ������: " << countsides << "\n";
    std::cout << "�������: a = " << a << ", b = " << a << ", c = " << a << ", d = " << a << "\n";
    std::cout << "����: A = " << angle1 << ", B = " << angle2 << ", C = " << angle1 << ", D = " << angle2 << "\n";
}