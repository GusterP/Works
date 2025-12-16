// 4.15
#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Введите число a: ";
	cin>>a;
	cout<<"Введите число b: ";
	cin>>b;
	cout<<"Введите число c: ";
	cin>>c;
	if (pow(b,2)-4*a*c>=0)
	{
		cout<<"Корни есть";
	}
	else
	{
		cout<<"Корней нет";
	}
}