#include <iostream>
#include <string>

class bad_length {}; // Исключение для случая запретной длины

int function(std::string str, int forbidden_length) {
    int length = str.length(); // Получаем длину строки

    if (length == forbidden_length) { // Проверяем, равна ли длина запретной длине
        throw bad_length(); // Если да, выбрасываем исключение
    }

    return length; // Возвращаем длину строки
}

int main() {
    setlocale(LC_ALL, "ru");
    int forbidden_length;
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length; // Получаем запретную длину от пользователя

    std::string input;
    while (true) {
        std::cout << "Введите слово: ";
        std::cin >> input; // Получаем строку от пользователя

        try {
            int length = function(input, forbidden_length); // Вызываем функцию, проверяющую длину строки
            std::cout << "Длина слова \"" << input << "\" равна " << length << std::endl;
        }
        catch (bad_length) { // Обрабатываем исключение для запретной длины
            std::cout << "Вы ввели слово запретной длины! До свидания" << std::endl;
            break; // Завершаем программу
        }
    }

    return 0;
}