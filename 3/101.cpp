// 3.48
#include<iostream>
#include<cmath>
int main()
{
	int y;
	int h,m;
	std::cout<<"Введите значение y (0<=y<=360): ";
	std::cin>>y;
	h = y/30;
	m = (y-h*30)/0.5;	std::cout<<"Часы:"<<h<<"\nМинуты:"<<m;
}