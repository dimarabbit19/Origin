#include <iostream>
#include <string>

// Структура для хранения информации о банковском счете
struct BankAccount {
    int accountNumber;
    std::string ownerName;
    double balance;
};

// Функция для изменения баланса счета
void changeBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main() {
    setlocale(LC_ALL, "ru");
    BankAccount account;

    // Запрос информации о банковском счете у пользователя
    std::cout << "Введите номер счета: ";
    std::cin >> account.accountNumber;

    std::cout << "Введите имя владельца: ";
    std::cin >> account.ownerName;

    std::cout << "Введите баланс: ";
    std::cin >> account.balance;

    // Вывод информации о банковском счете
    std::cout << "Ваш счет: " << account.ownerName << ", " << account.accountNumber << ", " << account.balance << std::endl;

    // Запрос нового баланса у пользователя
    double newBalance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;

    // Изменение баланса счета и вывод обновленной информации о счете
    changeBalance(account, newBalance);
    std::cout << "Ваш счет: " << account.ownerName << ", " << account.accountNumber << ", " << account.balance << std::endl;

    return 0;
}