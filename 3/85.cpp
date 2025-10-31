#include <iostream>
#include <cmath>
int main()
{
	for (int a = 100;a<1000;a++)
	{
		int a1,a2;
		a1 = a - a%10;
		a1 = a/10;
		a2 = a%10*100+a1;
		if (a2==237)
		{
			std::cout<<a;
		}
	}
}