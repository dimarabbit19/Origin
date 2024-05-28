#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <limits>

struct Address {
    std::string city;
    std::string street;
    std::string houseNumber;
    std::string apartmentNumber;
};

void printAddresses(const std::vector<Address>& addresses) {
    for (const auto& address : addresses) {
        std::cout << address.city << ", "
            << address.street << ", "
            << address.houseNumber << ", "
            << address.apartmentNumber << std::endl;
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    std::ifstream inputFile("in.txt");
    std::ofstream outputFile("out.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open input file" << std::endl;
        return 1;
    }

    int N;
    inputFile >> N;
    inputFile.ignore(); // Пропуск новой строки после числа

    std::vector<Address> addresses(N);
    for (int i = 0; i < N; ++i) {
        std::getline(inputFile, addresses[i].city);
        std::getline(inputFile, addresses[i].street);
        std::getline(inputFile, addresses[i].houseNumber);
        std::getline(inputFile, addresses[i].apartmentNumber);
    }

    inputFile.close();

    // Вывод начальных данных в консоль
    std::cout << "Начальные данные:" << std::endl;
    printAddresses(addresses);

    // Запись и вывод обработанных данных
    outputFile << N << std::endl;
    std::cout << "Конечные данные:" << std::endl;
    for (int i = N - 1; i >= 0; --i) {
        outputFile << addresses[i].city << ", "
            << addresses[i].street << ", "
            << addresses[i].houseNumber << ", "
            << addresses[i].apartmentNumber << std::endl;
                    
        std::cout << addresses[i].city << ", "
            << addresses[i].street << ", "
            << addresses[i].houseNumber << ", "
            << addresses[i].apartmentNumber << std::endl;
    }

    outputFile.close();

    // Ожидание ввода перед завершением программы, чтобы можно было увидеть результат в консоли
    std::cout << "Press Enter to exit...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return 0;
}