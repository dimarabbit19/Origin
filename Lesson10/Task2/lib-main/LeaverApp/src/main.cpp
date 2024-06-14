   #include <iostream>
   #include "Leaver.h"

   int main() {
       std::string name;
       std::cout << "Введите имя: ";
       std::getline(std::cin, name);

       Leaver leaver;
       std::cout << leaver.leave(name) << std::endl;

       return 0;
   }
   

