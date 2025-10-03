#include <iostream>
#include <cmath>
int main()
{
	setlocale(LC_ALL, "");
	float a, b, c;
	std::cout << "Стоимость 1 кг конфет: ";
	std::cin >> a;
	std::cout << "Стоимость 1 кг печенья: ";
	std::cin >> b;
	std::cout << "Стоимость 1 кг яблок: ";
	std::cin >> c;
	float d, e, f;
	std::cout << "Сколько кг продуктов желаете купить?\nКонфет: ";
	std::cin >> d;
	std::cout << "Печенья: ";
	std::cin >> e;
	std::cout << "Яблок: ";
	std::cin >> f;
	std::cout << "Сумма покупки: " << a * d + b * e + c * f;
}
