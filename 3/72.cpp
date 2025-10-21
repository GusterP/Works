#include <iostream>
#include <cmath>
int main()
{
	int a;
	std::cout<<"Введите трехначное число: ";
	std::cin>>a;
	std::cout<<a/100<<", "<<a/10%10<<", "<<a%10;
}