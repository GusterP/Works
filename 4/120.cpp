// 4.16
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
		if (pow(b,2)-4*a*c>0)
		{
			cout<<"x1 = "<<(-b+sqrt(pow(b,2)-4*a*c))/2*a<<"\nx2 = "<<(-b-sqrt(pow(b,2)-4*a*c))/2*a;
		}
		else
		{
			cout<<"x = "<<(-b+sqrt(pow(b,2)-4*a*c))/2*a;
		}
	}
	else
	{
		cout<<"Корней нет";
	}
}