#include <iostream>
#include <cmath>
int main()
{
	for (int a1,a = 100;a<1000;a++)
	{
		a1 = a - (a/100)*100;
		a1 = a1*10;
		a1 = a1+a/100;
		if (a1==564)
		{
			std::cout<<a;
		}
	}
}