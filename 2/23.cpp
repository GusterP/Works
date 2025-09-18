#include <iostream>
#include <cmath>
int main()
{
    float a;
    std::cout<<"Высота над Землёй: ";
    std::cin>>a;
    std::cout<<"Расстояние до линии горизонта: "<<sqrt(pow(3650+a,2)-pow(3650,2))<<'\n';
}
