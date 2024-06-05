#include <iostream>
#include "Header.h"
#include "RectangleTriangle.h"

int main() {
    setlocale(LC_ALL, "RU");
    try {
        Triangle triangle(60, 60, 60);
    }
    catch (const InvalidShapeError& e) {
        std::cout << "������ �������� ������. �������: " << e.what() << std::endl;
    }

    try {
        RectangleTriangle rectangleTriangle(3, 4, 5);
        // ��������, ��� ������� ��������� � �������� �������������� ������������
    }
    catch (const InvalidShapeError& e) {
        std::cout << "������ �������� ������. �������: " << e.what() << std::endl;
    }

    return 0;
}