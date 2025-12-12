// 4.10
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b;
	cout<<"Введите количество фут: ";
	cin>>a;
	cout<<"Введите количество метров: ";
	cin>>b;
	a = a*0.3048;
	if (a<b)
	{
		cout<<"Фут меньше";
	}
	else
	{
		cout<<"Метров меньше";
	}
}