#include <iostream>
#include <cmath>
int main()
{
	int a;
	std::cout<<"Введите значение: ";
	std::cin>>a;
	std::cout<<(a-1)%10+1<<" столбец "<<((a-1)/10)%5+1<<" ряд";
}