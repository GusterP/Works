#include <iostream>
#include <cmath>
int main()
{
	int a;
	std::cout<<"Введите значение: ";
	std::cin>>a;
	std::cout<<(((a-1)/15)/8)%10+1<<" ярус "<<((a-1)/15)%8+1<<" секция "<<(a-1)%15+1<<" место";
}
