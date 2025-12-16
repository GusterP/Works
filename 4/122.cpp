// 4.18
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Введите площадь круга: ";
	cin>>a;
	cout<<"Введите площадь квадрата: ";
	cin>>b;
	if (b>=M_PI/4*a)
	{
		cout<<"a) Да";
	}
	else
	{
		cout<<"a) Нет";
	}
	if (a>=M_PI/2*b)
	{
		cout<<"\nb) Да";
	}
	else
	{
		cout<<"\nb) Нет";
	}
}