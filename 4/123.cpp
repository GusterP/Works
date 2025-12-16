// 4.19
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Введите площадь круга: ";
	cin>>a;
	cout<<"Введите площадь квадрата: ";
	cin>>b;
	if (a<=0.6046*b)
	{
		cout<<"a) Да";
	}
	else
	{
		cout<<"a) Нет";
	}
	if (a>=2.418*b)
	{
		cout<<"\nb) Да";
	}
	else
	{
		cout<<"\nb) Нет";
	}
}