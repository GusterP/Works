#include <iostream>
#include <cmath>
int main()
{
    float a,b,c;
    std::cout<<"Дан прямоугольный параллелепипед\na = ";
    std::cin>>a;
    std::cout<<"b = ";
    std::cin>>b;
    std::cout<<"c = ";
    std::cin>>c;
    std::cout<<"Объём: "<<a*b*c<<"\nПлощадь боковой поверхности: "<<(2*a+2*b)*c;
}
