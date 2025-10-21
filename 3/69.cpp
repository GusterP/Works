#include <iostream>
#include <cmath>
int main()
{
	int a;
	std::cout<<"Введите значение: ";
	std::cin>>a;
	std::cout<<(((a-1)/6)/9)%4+1<<" подъезд "<<((a-1)/6)%9+1<<" этаж "<<(a-1)%6+1<<" по счëту";
} 