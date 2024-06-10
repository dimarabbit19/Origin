
#include "righttriangle .h"

   
righttriangle::righttriangle(int a, int b, int c, int A, int B) {
        if (a > 0 && b > 0 && c > 0 && A > 0 && B > 0) {
            this->countsides = 3;
            this->name = "Прямоугольный треугольник";
            this->a = a;
            this->b = b;
            this->c = c;
            this->angle1 = A;
            this->angle2 = B;
            this->angle3 = 90;
        }
        else {
            std::cout << "Ошибка ввода\n";
            exit(1);
        }



    }
    void righttriangle::print_info()  {
        std::cout << this->getname() << "\n";
        std::cout << "Количество сторон: " << this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
            << " b = " << this->Returnb() << " c = " << this->Returnc() << std::endl;
        std::cout << "Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3() << std::endl;
        std::cout << std::endl;
    }

    std::string righttriangle::getname() {
        return this->name;
    }
    int righttriangle::countSides() {
        return this->countsides;
    }
    int righttriangle::ReturnA() {
        return a;

    };
    int righttriangle::Returnb() {
        return b;

    };
    int righttriangle::Returnc() {
        return c;

    };
    int righttriangle::Returnangle1() {
        return angle1;

    };
    int righttriangle::Returnangle2() {
        return angle2;

    };
    int righttriangle::Returnangle3() {
        return angle3;

    }
