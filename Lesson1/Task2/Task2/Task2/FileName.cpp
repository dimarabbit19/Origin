#include <iostream>
#include <string>

// ��������� ��� �������� ���������� � ���������� �����
struct BankAccount {
    int accountNumber;
    std::string ownerName;
    double balance;
};

// ������� ��� ��������� ������� �����
void changeBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main() {
    setlocale(LC_ALL, "ru");
    BankAccount account;

    // ������ ���������� � ���������� ����� � ������������
    std::cout << "������� ����� �����: ";
    std::cin >> account.accountNumber;

    std::cout << "������� ��� ���������: ";
    std::cin >> account.ownerName;

    std::cout << "������� ������: ";
    std::cin >> account.balance;

    // ����� ���������� � ���������� �����
    std::cout << "��� ����: " << account.ownerName << ", " << account.accountNumber << ", " << account.balance << std::endl;

    // ������ ������ ������� � ������������
    double newBalance;
    std::cout << "������� ����� ������: ";
    std::cin >> newBalance;

    // ��������� ������� ����� � ����� ����������� ���������� � �����
    changeBalance(account, newBalance);
    std::cout << "��� ����: " << account.ownerName << ", " << account.accountNumber << ", " << account.balance << std::endl;

    return 0;
}