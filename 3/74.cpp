#include <iostream>
#include <cmath>
int main()
{
	int a,b,c,d,f;
	std::cout<<"Введите трехначное число: ";
	std::cin>>a;
	b = a/100;
	c = a/10%10;
	d = a%10;
	f = d*100+c*10+b;
	std::cout<<f;
}