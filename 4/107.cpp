// 4.3
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x;
	cout<<"Введите значение x: ";
	cin>>x;
	if (x>0)
	{
		cout<<pow(sin(x),2);
	}
	else
	{
		cout<<1+2*pow(sin(x),2);
	}
}