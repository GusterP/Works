#include <iostream>
int main()
{
	float a,b;
	std::cout<<"Количество населения в государстве: ",std::cin>>a,std::cout<<"Площадь государства: ",std::cin>>b;
	std::cout<<"Плотность населения в этом государстве: "<<a/b;
}