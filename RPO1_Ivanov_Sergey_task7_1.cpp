#include <iostream>

int main()
{
	system("chcp 1251");
	std::string name, birthday, map, age;
	std::cout << "¬веди им€, дату рождени€, откуда вы и возраст:" << std::endl;
	std::cin >> name >> birthday >> map >> age;
	std::cout << "Hello " << name << " from " << map << " " << age << " dob. " << "Your age is " << age;
	return 0;
}