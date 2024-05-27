#include <iostream>
#include <string>

class Counter {
private:
    int value;

public:
    // ����������� �� ���������
    Counter() : value(1) {}

    // ����������� � ���������������� ���������
    Counter(int initial_value) : value(initial_value) {}

    // ������ ��� ���������� � ���������� �������� ��������
    void increment() { value++; }
    void decrement() { value--; }

    // ����� ��� ��������� �������� �������� ��������
    int getValue() const { return value; }
};

int main() {
    setlocale(LC_ALL, "ru");
    Counter counter;
    std::string userInput;

    std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
    std::cin >> userInput;

    if (userInput == "��" || userInput == "��" || userInput == "��") {
        int initial_value;
        std::cout << "������� ��������� �������� ��������: ";
        std::cin >> initial_value;
        counter = Counter(initial_value);
    }

    while (true) {
        std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
        std::cin >> userInput;

        if (userInput == "+") {
            counter.increment();
        }
        else if (userInput == "-") {
            counter.decrement();
        }
        else if (userInput == "=") {
            std::cout << counter.getValue() << std::endl;
        }
        else if (userInput == "x") {
            std::cout << "�� ��������!" << std::endl;
            break;
        }
        else {
            std::cout << "������������ �������, ���������� �����." << std::endl;
        }
    }

    return 0;
}
