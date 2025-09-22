#include <iostream>
#include <cmath>
int main()
{
	int a,b;
	std::cout<<"Дано кольцо\nВнешний радиус равен: ",std::cin>>a,std::cout<<"Внутренний радиус равен: ",std::cin>>b;
	std::cout<<"Площадь кольца равна: "<<3.14*(pow(a,2)-pow(b,2));
}