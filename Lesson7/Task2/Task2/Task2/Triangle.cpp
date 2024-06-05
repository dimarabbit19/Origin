#include "Header.h"
#include <iostream>

Triangle::Triangle(int sideA, int sideB, int sideC) : a(sideA), b(sideB), c(sideC) {
    if (a + b + c != 180) {
        throw InvalidShapeError("Сумма углов не равна 180");
    }
    std::cout << "Треугольник (стороны " << a << ", " << b << ", " << c << "; углы " << 180 - a << ", " << 180 - b << ", " << 180 - c << ") создан" << std::endl;
}