#include <iostream>
#include <cmath>
int main()
{
	float a,b;
	std::cout<<"Первое число: ";
	std::cin>>a;
	std::cout<<"Второе число: ";
	std::cin>>b;
	std::cout<<"Среднее арифметическое их модулей: "<<(abs(a)+abs(b))/2<<"\n";
	std::cout<<"Среднее геометрическое их модулей: "<<sqrt(abs(a)*abs(b));
}