#include <iostream>
#include <cmath>
int main()
{
	setlocale(LC_ALL, "");
	float a, b, c, d;
	std::cout << "Цена монитора: ";
	std::cin >> a;
	std::cout << "Цена системного блока: ";
	std::cin >> b;
	std::cout << "Цена клавиатуры: ";
	std::cin >> c;
	std::cout << "Цена мыши: ";
	std::cin >> d;
	float e;
	std::cout << "Цена 3 компьютеров из этих элементов: " << 3 * (a + b + c + d)<<"\nСколько ещё компьютеров желаете купить из этих элементов?\n";
	std::cin >> d;
	std::cout << "Стоимость " << d << " компьютеров: " << d * (a + b + c + d);
}
