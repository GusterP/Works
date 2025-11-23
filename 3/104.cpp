// 3.51
#include<iostream>
#include<cmath>
int main()
{
	int a,b;
	std::cout<<"Введите значение a: ";
	std::cin>>a;
	std::cout<<"Введите значение b: ";
	std::cin>>b;
	std::cout<<(a/b==1) or (b/a==1) or a/b;
}