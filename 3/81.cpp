#include <iostream>
#include <cmath>
int main()
{
	int a,b,c,d,e,f,g,h,i,j;
	std::cout<<"Введите четырехначное число: ";
	std::cin>>a;
	c = a/1000;
	d = a/100%10;
	e = a/10%10;
	f = a%10;
	g = f*1000+e*100+d*10+c;
	h = d*1000+c*100+f*10+e;
	i = c*1000+e*100+d*10+f;
	j = e*1000+f*100+c*10+d;
	std::cout<<"1)\na) "<<g<<"\nb) "<<h<<"\nc) "<<i<<"\nd) "<<j;
	g = f*1000+e*100+d*10+c;
	h = d*1000+c*100+f*10+e;
	i = c*1000+e*100+d*10+f;
	j = e*1000+f*100+c*10+d;
	std::cout<<"1)\na) "<<g<<"\nb) "<<h<<"\nc) "<<i<<"\nd) "<<j;

}