// 3.46
#include<iostream>
#include<cmath>
int main()
{
	int k;
	std::cout<<"Введите значение k (1<=k<=150):";
	std::cin>>k;
	std::cout<<"a) "<<k/3+100<<"\nb) "<<(101+k/3)/100<<"\nc) "<<(101+k/3)/10%10;
}