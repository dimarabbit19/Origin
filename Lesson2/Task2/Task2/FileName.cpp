#include <iostream>
#include <string>

class Counter {
private:
    int value;

public:
    // Конструктор по умолчанию
    Counter() : value(1) {}

    // Конструктор с инициализирующим значением
    Counter(int initial_value) : value(initial_value) {}

    // Методы для увеличения и уменьшения значения счетчика
    void increment() { value++; }
    void decrement() { value--; }

    // Метод для получения текущего значения счетчика
    int getValue() const { return value; }
};

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
