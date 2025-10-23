#include <iostream>
#include <cmath>
int main()
{
	int a,b,c,d,e,f,g,h,i,j;
	std::cout<<"Введите четырехначное число: ";
	std::cin>>a;
	std::cout<<"Введите пятизначное число: ";
	std::cin>>b;
	c = a/1000;
	d = a/100%10;
	e = a/10%10;
	f = a%10;
	a = c+d+e+f;
	c = b/10000;
	d = b/1000%10;
	e = b/100%10;
	f = b/10%10;
	g = b%10;
	b = c+d+e+f+g;
	std::cout<<"a) "<<a<<"\nb) "<<b;
}