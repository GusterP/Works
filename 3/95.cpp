// 3.42
#include<iostream>
#include<cmath>
int main()
{
	int a1,a2,b;
	std::cout<<"Введите десятки двухзначного число: ";
	std::cin>>a2;
	std::cout<<"Введите единицы двухзначного число: ";
	std::cin>>a1;
	std::cout<<"Введите однозначное число: ";
	std::cin>>b;
	std::cout<<"Десятки: "<<a2+(a1+b)/10<<"\nЕдиницы: "<<(a1+b)%10;
}