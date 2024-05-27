#include <iostream>
#include <string>

// Структура для хранения адреса
struct Address {
    std::string city;
    std::string street;
    int houseNumber;
    int apartmentNumber;
    int postalCode;
};

// Функция для вывода структуры на консоль
void printAddress(const Address& address) {
    std::cout << "Город: " << address.city << std::endl;
    std::cout << "Улица: " << address.street << std::endl;
    std::cout << "Номер дома: " << address.houseNumber << std::endl;
    std::cout << "Номер квартиры: " << address.apartmentNumber << std::endl;
    std::cout << "Индекс: " << address.postalCode << std::endl;
}

int main() {
    setlocale(LC_ALL, "ru");
    // Создание и инициализация экземпляров структуры Address
    Address address1 = { "Москва", "Арбат", 12, 8, 123456 };
    Address address2 = { "Ижевск", "Пушкина", 59, 143, 953769 };

    // Вывод экземпляров структуры на консоль с помощью функции printAddress
    printAddress(address1);
    std::cout << std::endl;  // Пустая строка для разделения выводов
    printAddress(address2);

    return 0;
}