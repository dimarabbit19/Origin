#include <iostream>
#include "LeaverLib.h"

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    std::string name;
    std::cout << "Введите имя: ";
    std::getline(std::cin, name);

    Leaver leaver;
    std::string farewell = leaver.leave(name);

    std::cout << farewell << std::endl;
    system("pause");

    return 0;
}