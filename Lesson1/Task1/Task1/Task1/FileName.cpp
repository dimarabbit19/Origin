#include <iostream>
#include <string>

enum Months {
    ������ = 1, �������, ����, ������, ���, ����, ����, ������, ��������, �������, ������, �������
};

int main() {
    setlocale(LC_ALL, "Ru");

    // ������ ����� � ������� �������
    std::string monthNames[] = {
        "������������ �����!",
        "������", "�������", "����", "������", "���", "����",
        "����", "������", "��������", "�������", "������", "�������"
    };

    int monthNumber = -1;
    while (true) {
        std::cout << "������� ����� ������: ";
        std::cin >> monthNumber;

        if (monthNumber == 0) {
            break;
        }

        if (monthNumber >= 1 && monthNumber <= 12) {
            std::cout << monthNames[monthNumber] << std::endl;
        }
        else {
            std::cout << "������������ �����!" << std::endl;
        }
    }

    return 0;
}
