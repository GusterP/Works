#include <iostream>
#include <cmath>
int main()
{
	float a,b;
	std::cout<<"Дан прямоугольник\na = ";
	std::cin>>a;
	std::cout<<"b = ";
	std::cin>>b;
	std::cout<<"Периметр прямоугольника: "<<2*a+2*b<<"\nДиагональ прямоугольника: "<<sqrt(pow(a,2)+pow(b,2));
}