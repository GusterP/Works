#include <iostream>
#include <cmath>
int main()
{
	float a,x;
	std::cout<<"a) Дана функция: y = sqrt((2a+sin|3a|)/3,56)\nКакое значение a выберите?\na = ";
	std::cin>>a;
	std::cout<<"Значение функции: "<<sqrt(((2*a+sin(abs(3*a)))/3.56))<<"\n\n";	std::cout<<"b) Дана функция: y = sin((3,2+sqrt(1+x))/|5x|)\nКакое значение x выберите?\nx = ";
	std::cin>>x;
	std::cout<<"Значение функции: "<<sin((3.2+sqrt(1+x))/abs(5*x));
}
