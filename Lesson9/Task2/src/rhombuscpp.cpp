
#include "rhombus.h"

rhombus::rhombus(int a, int A, int B)
    {
        if (a > 0 && A > 0 && B > 0) {
            this->countsides = 4;
            this->name = "Ромб";
            this->a = a;
            this->c = a;
            this->b = a;
            this->d = a;
            this->angle1 = A;
            this->angle3 = A;
            this->angle2 = B;
            this->angle4 = B;
        }
        else {
            std::cout << "Ошибка ввода\n";
            exit(1);
        }
    }
    std::string rhombus::getname() {
        return this->name;
    }
    int rhombus::countSides() {
        return this->countsides;
    }
    int rhombus::ReturnA() {
        return a;

    };
    int rhombus::Returnb() {
        return b;

    };
    int rhombus::Returnc() {
        return c;

    };
    int rhombus::Returnd() {
        return d;

    };
    int rhombus::Returnangle1() {
        return angle1;

    };
    int rhombus::Returnangle2() {
        return angle2;

    };
    int rhombus::Returnangle3() {
        return angle3;

    };
    int rhombus::Returnangle4() {
        return angle4;

    };
    void rhombus::print_info()  {
        std::cout << this->getname() << "\n";
        std::cout << "Количество сторон: " << this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
            << " b = " << this->Returnb() << " c = " << this->Returnc() << " d = " << this->Returnd() << std::endl;
        std::cout << "Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3() << " D = " << this->Returnangle4() << std::endl;
        std::cout << std::endl;
    }

