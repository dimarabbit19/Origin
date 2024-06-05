#include <iostream>
#include <string>

class bad_length {}; // ���������� ��� ������ ��������� �����

int function(std::string str, int forbidden_length) {
    int length = str.length(); // �������� ����� ������

    if (length == forbidden_length) { // ���������, ����� �� ����� ��������� �����
        throw bad_length(); // ���� ��, ����������� ����������
    }

    return length; // ���������� ����� ������
}

int main() {
    setlocale(LC_ALL, "ru");
    int forbidden_length;
    std::cout << "������� ��������� �����: ";
    std::cin >> forbidden_length; // �������� ��������� ����� �� ������������

    std::string input;
    while (true) {
        std::cout << "������� �����: ";
        std::cin >> input; // �������� ������ �� ������������

        try {
            int length = function(input, forbidden_length); // �������� �������, ����������� ����� ������
            std::cout << "����� ����� \"" << input << "\" ����� " << length << std::endl;
        }
        catch (bad_length) { // ������������ ���������� ��� ��������� �����
            std::cout << "�� ����� ����� ��������� �����! �� ��������" << std::endl;
            break; // ��������� ���������
        }
    }

    return 0;
}