#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float sum=1;
    int oringinX;
    float productX=1;
    float factorial=1;
    int time=5;
    scanf("%d",&oringinX);
    for (int i = 1; i < time; i++)
    {
        factorial=factorial*i;
        productX*=oringinX;
        sum+=(productX/factorial);
    }
    printf("%f",sum);
    return 0;
}
