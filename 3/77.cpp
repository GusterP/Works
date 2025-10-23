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
	f = c*100+b*10+d;
	std::cout<<f;
}