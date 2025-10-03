#include <iostream>
#include <cmath>
int main()
{
	setlocale(LC_ALL, "");
	float a, b;
	std::cout << "Возраст Тани: ";
	std::cin >> a;
	std::cout << "Возраст Мити: ";
	std::cin >> b;
	std::cout << "Их средний возраст: " << (a + b) / 2 << "\nРазница в возрасте от среднего значения для Тани: " <<
		a - (a + b) / 2 << "\nРазница в возрасте от среднего значения для Мити: " << b - (a + b) / 2;
}
