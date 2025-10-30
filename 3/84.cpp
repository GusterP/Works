#include <iostream>
#include <cmath>
int main()
{
	int a;
	std::cout<<"Веддите число (>999): ";
	std::cin>>a;
	std::cout<<"a) "<<(a%1000-a%100)/100<<"\nb) "<<(a%10000-a%1000)/1000;
}