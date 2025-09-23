#include <iostream>
#include <cmath>
int main()
{
    float e,f,g,h;
    std::cout<<"Дана функция: a = (e+(f/2))/3\nКакое значение e и f выберите?\ne = ";
    std::cin>>e;
    std::cout<<"f = ";
    std::cin>>f;
    std::cout<<"Функция a = "<<(e+(f/2))/3<<'\n';
    std::cout<<"Дана функция: b = |h^2-g|\nКакое значение h и g выберите?\nh = ";
    std::cin>>h;
    std::cout<<"g = ";
    std::cin>>g;
    std::cout<<"Функция b = "<<abs(pow(h,2)-g)<<'\n';
    std::cout<<"Дана функция: c = sqrt((g-h)^2-3sine)\nКакое значение g,h и e выберите?\ng = ";
    std::cin>>g;
    std::cout<<"h = ";
    std::cin>>h;
    std::cout<<"e = ";
    std::cin>>e;
    std::cout<<"Функция c = "<<sqrt(pow(g-h,2)-3*sin(e));
}
