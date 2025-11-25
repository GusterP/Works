// 4.1
#include<iostream>
#include<cmath>
int main()
{
	float a,b;
	std::cout<<"Введите значение a и b: \n";
	std::cin>>a;
	std::cin>>b;
	if (a>b)
	{
		std::cout<<"Наибольшее: "<<a<<"\nНаименьшее: "<<b;
	}
	else
	{
		std::cout<<"Наибольшее: "<<b<<"\nНаименьшее: "<<a;
	}
}
