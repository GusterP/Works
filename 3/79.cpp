#include <iostream>
#include <cmath>
int main()
{
	int a,b,c,d,e,f,g,h,i,j;
	std::cout<<"Введите трехначное число: ";
	std::cin>>a;
	b = a/100;
	c = a/10%10;
	d = a%10;
	e = d*100+c*10+b;
	f = d*100+b*10+c;
	g = c*100+d*10+b;
	h = c*100+b*10+d;
	i = b*100+c*10+d;
	j = b*100+d*10+c;
		std::cout<<e<<"\n"<<f<<"\n"<<g<<"\n"<<h<<"\n"<<i<<"\n"<<j;
}