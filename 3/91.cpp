#include <iostream>
#include <cmath>
int main()
{
        for (int a1,a = 100;a<1000;a++)
        {
                a1 = a/100*100+a%10*10;
                a1 = a1+a%100/10;
                if (a1==456)
                {
                        std::cout<<a;
                }
        }
}