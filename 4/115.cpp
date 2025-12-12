// 4.11
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b;
	cout<<"Введите количество км/ч: ";
	cin>>a;
	cout<<"Введите количество м/с: ";
	cin>>b;
	a = a/3,6;
	if (a>b)
	{
		cout<<"км/ч больше";
	}
	else
	{
		cout<<"м/с больше";
	}
}