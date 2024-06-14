
#include <iostream>
#include <Header.h>
int main()
{
    Greeter a;
    std::cout << "Enter your Name:";
    std::string name;
    std::cin >> name;
   std::cout << a.greet(name);
    
}

 
