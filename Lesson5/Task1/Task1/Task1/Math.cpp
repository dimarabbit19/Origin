#include<iostream>
#include"Header.h"



void math() {
	int x = 0;
	int y = 0;
	int z = 0;
	int result = 0;
	
	
	std::cout << "������� ������ �����: ";
	std::cin >> x;
	std::cout << "\n";
	std::cout << "������� ������ �����: ";
	std::cin >> y;
	std::cout << "\n";
	std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
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

	case 5: std::cout << x << " � ������� "<< y;
		result = x * x;
}
	std::cout << "\n";
	std::cout <<"��� �����: " << result;

}
