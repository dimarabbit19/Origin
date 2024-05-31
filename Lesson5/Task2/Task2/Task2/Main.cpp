#include <iostream>
#include <string>
#include "Count.h"

int main() {
    setlocale(LC_ALL, "ru");
    Counter counter;
    std::string userInput;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> userInput;

    if (userInput == "да" || userInput == "Да" || userInput == "ДА") {
        int initial_value;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initial_value;
        counter = Counter(initial_value);
    }

    while (true) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
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
            std::cout << "До свидания!" << std::endl;
            break;
        }
        else {
            std::cout << "Некорректная команда, попробуйте снова." << std::endl;
        }
    }

    return 0;
}