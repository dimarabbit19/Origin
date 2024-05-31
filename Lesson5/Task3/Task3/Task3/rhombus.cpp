#include "rhombus.h"
#include <iostream>

rhombus::rhombus(int a, int A, int B) {
    if (a > 0 && A > 0 && B > 0) {
        this->countsides = 4;
        this->name = "Ромб";
        this->a = a;
        this->angle1 = A;
        this->angle2 = B;
    } else {
        std::cout << "Ошибка ввода\n";
        exit(1);
    }
}

void rhombus::print_info() {
    std::cout << name << "\n";
    std::cout << "Количество сторон: " << countsides << "\n";
    std::cout << "Стороны: a = " << a << ", b = " << a << ", c = " << a << ", d = " << a << "\n";
    std::cout << "Углы: A = " << angle1 << ", B = " << angle2 << ", C = " << angle1 << ", D = " << angle2 << "\n";
}