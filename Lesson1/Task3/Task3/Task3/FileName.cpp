#include <iostream>
#include <string>

// ��������� ��� �������� ������
struct Address {
    std::string city;
    std::string street;
    int houseNumber;
    int apartmentNumber;
    int postalCode;
};

// ������� ��� ������ ��������� �� �������
void printAddress(const Address& address) {
    std::cout << "�����: " << address.city << std::endl;
    std::cout << "�����: " << address.street << std::endl;
    std::cout << "����� ����: " << address.houseNumber << std::endl;
    std::cout << "����� ��������: " << address.apartmentNumber << std::endl;
    std::cout << "������: " << address.postalCode << std::endl;
}

int main() {
    setlocale(LC_ALL, "ru");
    // �������� � ������������� ����������� ��������� Address
    Address address1 = { "������", "�����", 12, 8, 123456 };
    Address address2 = { "������", "�������", 59, 143, 953769 };

    // ����� ����������� ��������� �� ������� � ������� ������� printAddress
    printAddress(address1);
    std::cout << std::endl;  // ������ ������ ��� ���������� �������
    printAddress(address2);

    return 0;
}