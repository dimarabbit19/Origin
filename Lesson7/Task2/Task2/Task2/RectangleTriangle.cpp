#include "RectangleTriangle.h"
#include <iostream>

RectangleTriangle::RectangleTriangle(int sideA, int sideB, int sideC) : a(sideA), b(sideB), c(sideC) {
    if (a + b + c != 180 || c != 90) {
        throw InvalidShapeError("Условия прямоугольного треугольника не выполнены");
    }
    std::cout << "Прямоугольный треугольник (стороны " << a << ", " << b << ", " << c << ") создан" << std::endl;
}