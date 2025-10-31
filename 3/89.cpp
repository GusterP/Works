#include <iostream>
#include <cmath>
int main()
{
        for (int a1,a = 100;a<1000;a++)
        {
                a1 = a/100*10+a%10;
                a1 = a1+a%100/10*100;
                if (a1==546)
                {
                        std::cout<<a;
                }
        }
}