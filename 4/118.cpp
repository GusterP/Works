// 4.14
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a,b,c,d;
	cout<<"Сопротивление первого тела: ";
	cin>>a;
	cout<<"Сопротивленте второго тела: ";
	cin>>b;
	cout<<"Напряжение первого тела: ";
	cin>>c;
	cout<<"Напряжение второго тела: ";
	cin>>d;
	if (a/c>b/d)
	{
		cout<<"Плотность первого вещества больше";
	}
	else
	{
		cout<<"Плотность второго вещества больше";
	}
}