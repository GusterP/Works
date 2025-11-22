// 3.50
#include<iostream>
#include<cmath>
int main()
{
	int h,m;
	std::cout<<"Введите значение h (0<h<=12): ";
	std::cin>>h;
	std::cout<<"Введите значение m (0<m<=59): ";
	std::cin>>m;
	if (h*5>=m)
	{
		std::cout<<"До совпадения: "<<h*5-m<<"\nДо перпендикулярности: "<<h*5-m+15;
	}
	else
	{
		std::cout<<"До совпадения: "<<60-m+h*5<<"\nДо перпендикулярности: "<<60-m+h*5+15;
	}
}