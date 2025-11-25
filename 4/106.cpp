// 4.2
#include<iostream>
#include<cmath>
int main()
{
	float x;
	std::cout<<"Введите значение x: ";
	std::cin>>x;
	if (x>0)
	{
		std::cout<<pow(sin(x),2);
	}
	else
	{
		std::cout<<1-pow(sin(x),2);
	}
}