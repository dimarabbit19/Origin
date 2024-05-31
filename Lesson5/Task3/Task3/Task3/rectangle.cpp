#include "rectangle.h"
#include <iostream>

rectangle::rectangle(int a, int b) {
    if (a > 0 && b > 0) {
        this->countsides = 4;
        this->name = "Прямоугольник";
        this->a = a;
        this->b = b;
    }
    else {
        std::cout << "Ошибка ввода\n";
        exit(1);
    }
}

void rectangle::print_info() {
    std::cout << name << "\n";
    std::cout << "Количество сторон: " << countsides << "\n";
    std::cout << "Стороны: a = " << a << ", b = " << b << "\n";
}