#include <iostream>

class Calculator {
private:
    double num1;
    double num2;

public:
    // �����������
    Calculator() : num1(0), num2(0) {}

    // ������ ��� ���������� �������������� ��������
    double add() const { return num1 + num2; }
    double multiply() const { return num1 * num2; }
    double subtract_1_2() const { return num1 - num2; }
    double subtract_2_1() const { return num2 - num1; }
    double divide_1_2() const { return num1 / num2; }
    double divide_2_1() const { return num2 / num1; }

    // ������ ��� ��������� �������� num1 � num2
    bool set_num1(double num1) {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }
        else {
            return false;
        }
    }

    bool set_num2(double num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {

    setlocale(LC_ALL, "Ru");
    Calculator calc;

    while (true) {
        double num1, num2;
        std::cout << "������� num1: ";
        std::cin >> num1;
        std::cout << "������� num2: ";
        std::cin >> num2;

        // �������� �� ������������ ����
        if (!calc.set_num1(num1) || !calc.set_num2(num2)) {
            std::cout << "�������� ����!\n";
            std::cin.clear();  // ������� ������ �����
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // ������������� ���������� �������� � ������
            continue;  // ������� � ��������� �������� �����
        }

        // ����� ����������� �������������� ��������
        std::cout << "num1 + num2 = " << calc.add() << std::endl;
        std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
        std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;
    }

    return 0;
}
