#include <iostream>
#include <cmath>
int main()
{
	setlocale(LC_ALL, "");
	float a;
	std::cout << "Дана функция: y = a^2+10/sqrt(a^2+1)\nКакое значение a вы виберите?\n";
	std::cin >> a;
	std::cout << "Функция равна: " << (pow(a, 2) + 10) / sqrt(pow(a, 2) + 1);
}
