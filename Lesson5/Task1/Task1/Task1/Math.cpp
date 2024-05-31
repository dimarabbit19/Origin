#include<iostream>
#include"Header.h"



void math() {
	int x = 0;
	int y = 0;
	int z = 0;
	int result = 0;
	
	
	std::cout << "Введите первое число: ";
	std::cin >> x;
	std::cout << "\n";
	std::cout << "Введите второе число: ";
	std::cin >> y;
	std::cout << "\n";
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cout << "\n";
	std::cin >> z;

	switch (z) {

	case 1:  '+';
		result = x + y;
		break;
	case 2:  '-';
		result = x - y;
		break;
	case 3:  '*';
		result = x * y;
		break;
	case 4: '/';
		result = x/y;
		break;

	case 5: std::cout << x << " в степени "<< y;
		result = x * x;
}
	std::cout << "\n";
	std::cout <<"Ваш ответ: " << result;

}
