#include <iostream>
#include <cmath>
int main()
{
	setlocale(LC_ALL, "");
	float a, b, c;
	std::cout << "Два автомобиля едут навстречу друг другу\nСкорость первого автомобиля: ";
	std::cin >> a;
	std::cout << "Скорость второго автомобиля: ";
	std::cin >> b;
	std::cout << "Расстояние между первым и вторым автомобилем: ";
	std::cin >> c;
	std::cout << "Автомобили встретятся через " << c / (a + b) << " часов";
}
