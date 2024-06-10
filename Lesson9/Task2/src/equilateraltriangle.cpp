
#include "equilateraltriangle.h"

equilateraltriangle::equilateraltriangle(int a) {
        if (a > 0) {
            this->countsides = 3;
            this->name = "Равносторонний треугольник";
            this->a = a;
            this->b = a;
            this->c = a;
            this->angle2 = 60;
            this->angle3 = 60;
            this->angle1 = 60;
        }
        else
        {
            std::cout << "Ошибка ввода\n";
            exit(1);

        }
    }
    void equilateraltriangle::print_info()  {
        std::cout << this->getname() << "\n";
        std::cout << "Количество сторон: " << this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
            << " b = " << this->Returnb() << " c = " << this->Returnc() << std::endl;
        std::cout << "Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3() << std::endl;
        std::cout << std::endl;
    }

    std::string equilateraltriangle::getname() {
        return this->name;
    }
    int equilateraltriangle::countSides() {
        return this->countsides;
    }
    int equilateraltriangle::ReturnA() {
        return a;

    };
    int equilateraltriangle::Returnb() {
        return b;

    };
    int equilateraltriangle::Returnc() {
        return c;

    };
    int equilateraltriangle::Returnangle1() {
        return angle1;

    };
    int equilateraltriangle::Returnangle2() {
        return angle2;

    };
    int equilateraltriangle::Returnangle3() {
        return angle3;

    }

