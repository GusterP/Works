#include <iostream>
#include <cmath>
int main()
{
	int a,a1;
	std::cout<<"Введите значение n (1<=x<=999): ";
	std::cin>>a;
	a1 = a - a%10;
	a1 = a1/10;
	a1 = a1+a%10*100;
	std::cout<<a1;
}