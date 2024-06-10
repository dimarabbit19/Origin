
#include "triangle.h"

    triangle::triangle(int a, int b, int c, int A, int B, int C) {
        if (a > 0 && b > 0 && c > 0 && A > 0 && B > 0 && C > 0) {
            this->countsides = 3;
            this->name = "Треугольник";
            this->a = a;
            this->b = b;
            this->c = c;
            this->angle1 = A;
            this->angle2 = B;
            this->angle3 = C;
        }
        else {
            std::cout << "Ошибка ввода\n";
            exit(1);
        }

    }std::string  triangle::getname() {
        return this->name;
    }
    int triangle::countSides() {
        return this->countsides;
    }
    int  triangle::ReturnA() {
        return a;

    };
    int  triangle::Returnb() {
        return b;

    };
    int  triangle::Returnc() {
        return c;

    };
    int  triangle::Returnangle1() {
        return angle1;

    };
    int  triangle::Returnangle2() {
        return angle2;

    };
    int  triangle::Returnangle3() {
        return angle3;

    }
    void triangle::print_info()  {
        std::cout << this->getname() << "\n";
        std::cout << "Количество сторон: " << this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
            << " b = " << this->Returnb() << " c = " << this->Returnc() << std::endl;
        std::cout << "Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3() << std::endl;
        std::cout << std::endl;
    }



