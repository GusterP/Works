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
	if (b-a>=0)
	{
		cout<<"a) Да";
	}
	else
	{
		cout<<"a) Нет";
	}
	if (a-b>=0)
	{
		cout<<"\nb) Да";
	}
	else
	{
		cout<<"\nb) Нет";
	}
}