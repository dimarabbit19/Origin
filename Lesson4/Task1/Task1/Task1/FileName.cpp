#include <iostream>

class Figure {
public:
    Figure() : sides(0) {}
    virtual int getSides() const {
        return sides;
    }

protected:
    int sides;
};

class Triangle : public Figure {
public:
    Triangle() {
        sides = 3;
    }
    virtual int getSides() const override {
        return sides;
    }
};

class Quadrilateral : public Figure {
public:
    Quadrilateral() {
        sides = 4;
    }
    virtual int getSides() const override {
        return sides;
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    Figure figure;
    Triangle triangle;
    Quadrilateral quadrilateral;

    std::cout << "Количество сторон:" << std::endl;
    std::cout << "Фигура: " << figure.getSides() << std::endl;
    std::cout << "Треугольник: " << triangle.getSides() << std::endl;
    std::cout << "Четырёхугольник: " << quadrilateral.getSides() << std::endl;

    return 0;
}
