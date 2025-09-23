#include <iostream>
#include <cmath>
int main()
{
    float x1,y1,x2,y2;
    std::cout<<"Дана функция: z = (x+((2+y)/x^2))/(y+(1/(sqrt(x^2+10))))\nКакое значение x и y выберите?\nx = ";
    std::cin>>x1;
    std::cout<<"y = ";
    std::cin>>y1;
    std::cout<<"Значение функции z = "<<(x1+((2+y1)/pow(x1,2)))/(y1+(1/(sqrt(pow(x1,2)+10))))<<"\n";
    std::cout<<"Дана функция: q = 7.25sinx-|y|\nКакое значение x и y выберите?\nx = ";
    std::cin>>x2;
    std::cout<<"y = ";
    std::cin>>y2;
    std::cout<<"Значение функции q = "<<7.25*sin(x2)-abs(y2);
}
