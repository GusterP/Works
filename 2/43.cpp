#include <iostream>
#include <cmath>
int main()
{
    float x1,x2,y1,y2;
    std::cout<<"Даны точки на плоскости\nКоординаты точки А:\nx = ";
    std::cin>>x1;
    std::cout<<"y = ";
    std::cin>>y1;
    std::cout<<"Координаты точки В:\nx = ";
    std::cin>>x2;
    std::cout<<"y = ";
    std::cin>>y2;
    std::cout<<"Расстояние между этими точками: "<<sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
