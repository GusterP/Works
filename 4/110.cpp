// 4.6
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y;
	cout<<"Введите значение x: ";
	cin>>x;
	if (x>=2)
	{
		cout<<"a) "<<2;
	}
	else
	{
		cout<<"a) "<<x;
	}
	if (x>=3)
	{
		cout<<"\nb) "<<-3;
	}
	else
	{
		cout<<"\nb) "<<-x;
	}
}