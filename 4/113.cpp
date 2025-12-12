// 4.9
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b;
	cout<<"Введите значение a: ";
	cin>>a;
	cout<<"Введите значение b: ";
	cin>>b;
	cout<<"Максимальное: "<<a*(a>b)+b*(b>a)<<"\nМинимальное: "<<a*(b>a)+b*(a>b);
}