#include <iostream>
#include <cmath>
int main()
{
	int a;
	std::cout<<"Число n: ";
	std::cin>>a;
	if (a%12==0)
	{
		std::cout<<"Число x: 1";
	}
	else
	{
		std::cout<<"Число x: "<<a%12+1;
	}
}