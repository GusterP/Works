#include <iostream>
#include <cmath>
int main()
{
	int a;
	std::cout<<"Веддите число (>99): ";
	std::cin>>a;
	std::cout<<"a) "<<(a%100-a%10)/10<<"\nb) "<<(a%1000-a%100)/100;
}