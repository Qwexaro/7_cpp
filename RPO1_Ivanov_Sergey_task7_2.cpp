#include <iostream>
#include <string>
#include <conio.h>
int main()
{
	system("color 2"); // ��� ������� =)
	system("chcp 1251");
	char symbol;
	std::string str;
	std::cout << "����� ������\n~# ";
	std::getline(std::cin, str);
	
	//int code = _getch();
	std::cout << "����� ������ ����� �������:" << std::endl;
	//std::cin >> symbol;
	symbol = _getch();

	for (int i = 0; i < str.size(); i++)
	{
		if(str.at(i) == symbol) std::cout << "������ - " << str.at(i) << " ~> �������: " << i << std::endl;
	}

	std::cout << "��� ��������� ���������:" << std::endl;
	for (int i = 0; i < str.size(); i++)
	{
		if (str.at(i) != symbol) std::cout << "������ - " << str.at(i) << " | �������: " << i << std::endl;
	}
	return 0;
}