#include <iostream>
#include <cmath>
int main()
{
	float a,b;
	std::cout<<"Дан прямоугольный треугольник\nПервый катет равен: ",std::cin>>a,std::cout<<"Второй катет равен: ",std::cin>>b;
	std::cout<<"Гипотенуза равна: "<<sqrt(pow(a,2)+pow(b,2));
}