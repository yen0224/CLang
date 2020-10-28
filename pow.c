#include <stdio.h>
#include <math.h>//-->欲使用pow()須引入math.h函式庫
int main()
{
    for (int i=1; i < 10; i++)
    {
        printf("%d\t%.0f\t%.0f\t%.0f\t\n",i,pow(i,2),pow(i,3),pow(i,4));
        //
    }

    return 0;
}