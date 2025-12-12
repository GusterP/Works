// 4.13
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a,b,c,d;
	cout<<"Объем первого тела: ";
	cin>>a;
	cout<<"Объем второго тела: ";
	cin>>b;
	cout<<"Масса первого тела: ";
	cin>>c;
	cout<<"Масса второго тела: ";
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