#include <iostream>
#include <cmath>
int main()
{
    float a,b,c;
    std::cout<<"Дан прямоугольный треугольник.\nПервый катет равен: ";
    std::cin>>a;
    std::cout<<"Второй катет равен: ";
    std::cin>>b;
    c = sqrt(pow(a,2)+pow(b,2));
    std::cout<<"Гипотенуза равна: "<<c<<"\n";
    std::cout<<"Периметр равен: "<<a+b+c;
}
