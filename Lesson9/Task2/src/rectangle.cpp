
#include "rectangle.h"

    rectangle::rectangle(int a, int b) {
        if (a > 0 && b > 0) {
            this->name = "Прямоугольник";
            this->countsides = 4;
            this->a = a;
            this->c = a;
            this->b = b;
            this->d = b;
            this->angle1 = 90;
            this->angle2 = 90;
            this->angle3 = 90;
            this->angle4 = 90;
        }
        else {
            std::cout << "Ошибка ввода\n";
            exit(1);
        }
    }
    std::string rectangle::getname() {
        return this->name;
    }
    int rectangle::countSides() {
        return this->countsides;
    }
    int rectangle::ReturnA() {
        return a;

    };
    int rectangle::Returnb() {
        return b;

    };
    int rectangle::Returnc() {
        return c;

    };
    int rectangle::Returnd() {
        return d;

    };
    int rectangle::Returnangle1() {
        return angle1;

    };
    int rectangle::Returnangle2() {
        return angle2;

    };
    int rectangle::Returnangle3() {
        return angle3;

    };
    int rectangle::Returnangle4() {
        return angle4;

    };

    void rectangle::print_info() {
        std::cout << this->getname() << "\n";
        std::cout << "Количество сторон: " << this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
            << " b = " << this->Returnb() << " c = " << this->Returnc() << " d = " << this->Returnd() << std::endl;
        std::cout << "Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3() << " D = " << this->Returnangle4() << std::endl;
        std::cout << std::endl;
    }
