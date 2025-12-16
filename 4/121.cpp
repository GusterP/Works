// 4.17
#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Введите год рождения: ";
	cin>>a;
	cout<<"Введите месяц: ";
	cin>>b;
	cout<<"Введите текущий год: ";
	cin>>c;
	cout<<"Введите текущий месяц: ";
	cin>>d;
	if (b<=d)
	{
		cout<<"Человеку "<<c-a<<" лет.";
	}
	else
	{
		cout<<"Человеку "<<c-a-1<<" лет.";
	}
}