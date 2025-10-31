#include <iostream>
#include <cmath>
int main()
{
	int a,a1;
	std::cout<<"Введите трехзначное число: ";
	std::cin>>a;
	a1 = a - a%10;
	a1 = a/10;
	a = a%10*100+a1;
	std::cout<<a;
}