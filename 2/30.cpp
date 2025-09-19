#include <iostream>
int main()
{
	float a,b;
	std::cout<<"Дано линейнеое уравнение: ax+b=0\nКакое число a выберите?\na = ",std::cin>>a;
	if(a==0)
	{
		std::cout<<"Решения нет";
	}
	else
	{
		std::cout<<"Какое число b выберите?\nb = ",std::cin>>b;
		std::cout<<"Решение уравнения: "<<-b/a;
	}
}