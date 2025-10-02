#include <iostream>
#include <cmath>
int main()
{
	float x1,y1,x2,y2,x3,y3;
	std::cout<<"Тругольник задан координатами своих вершин.\nКоординаты точки А:\nx = ";
	std::cin>>x1;
	std::cout<<"y = ";
	std::cin>>y1;
	std::cout<<"Координаты точки В:\nx = ";
	std::cin>>x2;
	std::cout<<"y = ";
	std::cin>>y2;
	std::cout<<"Кординаты точки C:\nx = ";
	std::cin>>x3;
	std::cout<<"y = ";
	std::cin>>y3;
	float ab,bc,ca,P,p;
	ab = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	bc = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
	ca = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
	P = ab+bc+ca;
	p = P/2;
	std::cout<<"Длина AB равна: "<<ab<<"\nДлина BC равна: "<<bc<<"\nДлина СА равна: "<<ca<<"\nПериметр треугольника равен: "<<P<<"\nПлощадь тругольника равна: "<<sqrt((p*(p-ab)*(p-bc)*(p-ca)));
}