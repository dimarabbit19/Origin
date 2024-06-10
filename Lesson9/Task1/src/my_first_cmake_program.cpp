#include<iostream>
#include<string>



int main()
{
	setlocale(LC_ALL, "RU");
	
	std::string name;
	
	std::cout<<"Enter name: ";
	std::cin>>name;
	std::cout<<std::endl;
	std::cout<<"Hello, "<<name<<"!"<<std::endl;
	
	system("pause");
	
	
	
	return 0;
}