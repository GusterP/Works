#include <iostream>
#include <cmath>
int main()
{
	int a;
	std::cout<<"Веддите число (>9): ";
	std::cin>>a;
	std::cout<<"a) "<<a%10<<"\nb) "<<(a%100-a%10)/10;
}