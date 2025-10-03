#include <iostream>
#include <cmath>
int main()
{
	float x1,y1,x2,y2,x3,y3,x4,y4;
	std::cout<<"Выпуклый четырехугольник задан координатами своих вершин.\nКоординаты точки А:\nx = ";
	std::cin>>x1;
	std::cout<<"y = ";
	std::cin>>y1;
	std::cout<<"Координаты точки B:\nx = ";
	std::cin>>x2;
	std::cout<<"y = ";
	std::cin>>y2;
	std::cout<<"Координаты точки C:\nx = ";
	std::cin>>x3;
	std::cout<<"y = ";
	std::cin>>y3;
	std::cout<<"Координаты точки D:\nx = ";
	std::cin>>x4;
	std::cout<<"y = ";
	std::cin>>y4;
	float ab,bc,cd,da,ca;
	ab = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	bc = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
	cd = sqrt(pow(x4-x3,2)+pow(y4-y3,2));
	da = sqrt(pow(x1-x4,2)+pow(y1-y4,2));
	ca = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
	float p1,p2,s1,s2;
	p1 = (ab+bc+ca)/2;
	p2 = (cd+da+ca)/2;
	s1 = sqrt(p1*(p1-ab)*(p1-bc)*(p1-cd));
	s2 = sqrt(p2*(p2-cd)*(p2-da)*(p2-ca));
	std::cout<<"Длина стороны AB: "<<ab<<"\nДлина стороны BC: "<<bc<<"\nДлина стороны CD: "<<cd<<"\nДлина стороны DA: "<<da<<"\nПлощадь четырехугольника: "<<s1+s2;
}