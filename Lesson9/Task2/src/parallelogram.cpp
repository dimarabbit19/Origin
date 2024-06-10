
#include "parallelogram.h"

parallelogram::parallelogram(int a, int b, int A, int D) {
        if (a > 0 && b > 0 && A > 0 && D > 0) {
            this->countsides = 4;
            this->a = a;
            this->c = a;
            this->b = b;
            this->d = b;
            this->angle1 = A;
            this->angle3 = A;
            this->angle2 = D;
            this->angle4 = D;
            this->name = "Параллелограмм";
        }
        else {
            std::cout << "Ошибка ввода\n";
            exit(1);
        }

    }std::string parallelogram::getname() {
        return this->name;
    }
    int parallelogram::countSides() {
        return this->countsides;
    }
    int parallelogram::ReturnA() {
        return a;

    };
    int parallelogram::Returnb() {
        return b;

    };
    int parallelogram::Returnc() {
        return c;

    };
    int parallelogram::Returnd() {
        return d;

    };
    int parallelogram::Returnangle1() {
        return angle1;

    };
    int parallelogram::Returnangle2() {
        return angle2;

    };
    int parallelogram::Returnangle3() {
        return angle3;

    };
    int parallelogram::Returnangle4() {
        return angle4;

    };
    void parallelogram::print_info()  {
        std::cout << this->getname() << "\n";
        std::cout << "Количество сторон: " << this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
            << " b = " << this->Returnb() << " c = " << this->Returnc() << " d = " << this->Returnd() << std::endl;
        std::cout << "Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3() << " D = " << this->Returnangle4() << std::endl;
        std::cout << std::endl;
    }

