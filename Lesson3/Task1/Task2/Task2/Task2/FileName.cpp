#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>

struct Address {
    std::string city;
    std::string street;
    std::string houseNumber;
    std::string apartmentNumber;
};

void printAddresses(const std::vector<Address>& addresses) {
    for (const auto& address : addresses) {
        std::cout << std::endl; // добавл€ем пустую строку перед каждым адресом
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
    inputFile.ignore(); // ѕропуск новой строки после числа

    std::vector<Address> addresses(N);
    for (int i = 0; i < N; ++i) {
        std::getline(inputFile, addresses[i].city);
        std::getline(inputFile, addresses[i].street);
        std::getline(inputFile, addresses[i].houseNumber);
        std::getline(inputFile, addresses[i].apartmentNumber);
    }

    inputFile.close();

    // —ортировка адресов по названию города
    std::sort(addresses.begin(), addresses.end(), [](const Address& a, const Address& b) {
        return a.city < b.city;
        });

    // ¬ывод начальных данных в консоль
    std::cout << "Ќачальные данные:" << std::endl;
    printAddresses(addresses);

    // «апись и вывод отсортированных данных
    outputFile << N << std::endl;
    std::cout << " онечные данные:" << std::endl;
    for (const auto& address : addresses) {
        outputFile << address.city << ", "
            << address.street << ", "
            << address.houseNumber << ", "
            << address.apartmentNumber << std::endl;

        std::cout << std::endl; // добавл€ем пустую строку перед выводом каждого адреса
        std::cout << address.city << ", "
            << address.street << ", "
            << address.houseNumber << ", "
            << address.apartmentNumber << std::endl;
    }

    outputFile.close();

    // ќжидание ввода перед завершением программы, чтобы можно было увидеть результат в консоли
    std::cout << "Press Enter to exit...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return 0;
}

    
