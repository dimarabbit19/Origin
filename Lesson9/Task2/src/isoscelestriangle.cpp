
#include "isoscelestriangle.h"


isoscelestriangle::isoscelestriangle(int a, int b, int A, int B) {
        if (a > 0 && b > 0 && A > 0 && B > 0) {
            this->countsides = 3;
            this->name = "Равнобедренный треугольник";
            this->a = a;
            this->c = a;
            this->angle1 = A;
            this->angle3 = A;
            this->b = b;
            this->angle2 = B;
        }
        else {
            std::cout << "Ошибка ввода\n";
            exit(1);
        }
    }
    void isoscelestriangle::print_info()  {
        std::cout << this->getname() << "\n";
        std::cout << "Количество сторон: " << this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
            << " b = " << this->Returnb() << " c = " << this->Returnc() << std::endl;
        std::cout << "Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3() << std::endl;
        std::cout << std::endl;
    }

    std::string isoscelestriangle::getname() {
        return this->name;
    }
    int isoscelestriangle::countSides() {
        return this->countsides;
    }
    int isoscelestriangle::ReturnA() {
        return a;

    };
    int isoscelestriangle::Returnb() {
        return b;

    };
    int isoscelestriangle::Returnc() {
        return c;


    }
    int isoscelestriangle::Returnangle1() {
        return angle1;

    };
    int isoscelestriangle::Returnangle2() {
        return angle2;

    };
    int isoscelestriangle::Returnangle3() {
        return angle3;

    }

