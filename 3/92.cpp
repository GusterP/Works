#include <iostream>
#include <cmath>
int main()
{
    int a,a1;
    std::cout<<"Введите число n (10<=n<=999): ";
    std::cin>>a;
    a1 = (a-a%100)+a%10*10+a%100/10;
	std::cout<<a1;
}