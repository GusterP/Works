// 3.49
#include<iostream>
#include<cmath>
int main()
{
	int y;
	int h,m,s;
	std::cout<<"Введите значение y (0<y<=360): ";
	std::cin>>y;
	h = y/30;
	m = (y-h*30)/0.5;
	s = (y-h*30)*12;
	std::cout<<"Минуты в градусах: "<<s<<"\nЧасы:"<<h<<"\nМинуты:"<<m;
}