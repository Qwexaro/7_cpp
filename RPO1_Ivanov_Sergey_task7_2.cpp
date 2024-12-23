#include <iostream>
#include <string>
#include <conio.h>
int main()
{
	system("color 2"); // ура зеленый =)
	system("chcp 1251");
	char symbol;
	std::string str;
	std::cout << "Введи строку\n~# ";
	std::getline(std::cin, str);
	
	//int code = _getch();
	std::cout << "Какой символ нужно вывести:" << std::endl;
	//std::cin >> symbol;
	symbol = _getch();

	for (int i = 0; i < str.size(); i++)
	{
		if(str.at(i) == symbol) std::cout << "Символ - " << str.at(i) << " ~> Позиция: " << i << std::endl;
	}

	std::cout << "Все остальные вхождения:" << std::endl;
	for (int i = 0; i < str.size(); i++)
	{
		if (str.at(i) != symbol) std::cout << "Символ - " << str.at(i) << " | Позиция: " << i << std::endl;
	}
	return 0;
}