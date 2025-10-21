#include <iostream>
#include <cmath>
int main()
{
	int a;
	std::cout<<"Введите двузначное число: ";
	std::cin>>a;
	std::cout<<a%10+a/10;
}