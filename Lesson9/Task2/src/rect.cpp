
#include "rect.h"

    rect::rect(int num) {
        if (num > 0) {
            this->name = "Квадрат";
            this->countsides = 4;
            this->b = num;
            this->a = num;
            this->c = num;
            this->d = num;
            this->angle4 = 90;
            this->angle1 = 90;
            this->angle2 = 90;
            this->angle3 = 90;
        }
        else {
            std::cout << "Ошибка ввода\n";
            exit(1);
        }
    }
    std::string  rect::getname() {
        return this->name;
    }
    int  rect::countSides() {
        return this->countsides;
    }
    int  rect::ReturnA() {
        return a;

    };
    int  rect::Returnb() {
        return b;

    };
    int  rect::Returnc() {
        return c;

    };
    int  rect::Returnd() {
        return d;

    };
    int  rect::Returnangle1() {
        return angle1;

    };
    int  rect::Returnangle2() {
        return angle2;

    };
    int  rect::Returnangle3() {
        return angle3;

    };
    int  rect::Returnangle4() {
        return angle4;


    };
    void  rect::print_info() {
        std::cout << this->getname() << "\n";
        std::cout << "Количество сторон: " << this->countSides() << "\n";
        std::cout << "Стороны: " << "a = " << this->ReturnA()
            << " b = " << this->Returnb() << " c = " << this->Returnc() << " d = " << this->Returnd() << std::endl;
        std::cout << "Углы: " << "A = " << this->Returnangle1() << " B = " << this->Returnangle2() << " C = " << this->Returnangle3() << " D = " << this->Returnangle4() << std::endl;
        std::cout << std::endl;
    }
