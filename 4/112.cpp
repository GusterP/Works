// 4.8
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x,k;
	cout<<"Введите значение x: ";
	cin>>x;
	if (sin(x)>=0)
	{
		k = pow(x,2);
	}
	else
	{
		k = abs(x);
	}
	if (k<x)
	{
		cout<<abs(x);
	}
	else
	{
		cout<<k*x;
	}
}