#include <iostream>
#include <string>

enum Months {
    Январь = 1, Февраль, Март, Апрель, Май, Июнь, Июль, Август, Сентябрь, Октябрь, Ноябрь, Декабрь
};

int main() {
    setlocale(LC_ALL, "Ru");

    // Массив строк с именами месяцев
    std::string monthNames[] = {
        "Неправильный номер!",
        "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь",
        "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"
    };

    int monthNumber = -1;
    while (true) {
        std::cout << "Введите номер месяца: ";
        std::cin >> monthNumber;

        if (monthNumber == 0) {
            break;
        }

        if (monthNumber >= 1 && monthNumber <= 12) {
            std::cout << monthNames[monthNumber] << std::endl;
        }
        else {
            std::cout << "Неправильный номер!" << std::endl;
        }
    }

    return 0;
}
