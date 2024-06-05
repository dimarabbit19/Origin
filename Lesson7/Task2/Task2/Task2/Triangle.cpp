#include "Header.h"
#include <iostream>

Triangle::Triangle(int sideA, int sideB, int sideC) : a(sideA), b(sideB), c(sideC) {
    if (a + b + c != 180) {
        throw InvalidShapeError("����� ����� �� ����� 180");
    }
    std::cout << "����������� (������� " << a << ", " << b << ", " << c << "; ���� " << 180 - a << ", " << 180 - b << ", " << 180 - c << ") ������" << std::endl;
}