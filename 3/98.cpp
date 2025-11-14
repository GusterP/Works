// 3.45
#include<iostream>
#include<cmath>
int main()
{
	int k;
	std::cout<<"Введите значение k (1<=k<=180):";
	std::cin>>k;
	std::cout<<"a) "<<k/2+1*(k%2)<<"\nb) "<<10+(k/2+1*(k%2))-1;
	if (k%2==0)
	{
		std::cout<<"\nc) "<<(10+(k/2+1*(k%2))-1)%10;
	}
	else
	{
		std::cout<<"\nc) "<<(10+(k/2+1*(k%2))-1)/10;
	}
}