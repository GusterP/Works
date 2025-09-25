#include <iostream>
#include <cmath>
int main()
{
	int a,b;
	std::cout<<"Первое число: ";
	std::cin>>a;
	std::cout<<"Второе число: ";
	std::cin>>b;
	std::cout<<"Их сумма: "<<a+b<<"\nИх разность: "<<a-b<<"\nИх произведение: "<<a*b<<"\nЧастное от деления первого числа на второе: "<<a % b;
}