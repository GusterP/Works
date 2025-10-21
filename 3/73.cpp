#include <iostream>
#include <cmath>
int main()
{
	int a,b,c,d;
	std::cout<<"Введите трехначное число: ";
	std::cin>>a;
	b = a/100;
	c = a/10%10;
	d = a%10;
	std::cout<<"a) "<<d<<"\nb) "<<c<<"\nc) "<<b+c+d<<"\nd) "<<b*c*d;
}