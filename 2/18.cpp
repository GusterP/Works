#include <iostream>
#include <cmath>
int main()
{
	setlocale(LC_ALL, "");
	int x,a;
	std::cout << "a) Дана функция: y = 17x^2-6x+13\nКакое значение x вы выберите?\n";
	std::cin >> x;
	std::cout << "Функция равна: " << pow(x, 2) * 17 - 6 * x + 13 << "\n";
	std::cout << "\nb) Дана функция: y = 3a^2+5a-21\nКакое значение a вы выберите?\n";
	std::cin >> a;
	std::cout << "Функция равна: " << pow(a, 2) * 3 + 5 * a - 21;
}
