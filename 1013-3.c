#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float num;
    float maxi = 0;
    scanf("%f", &num);
    maxi=num;
    while ((int)(num*100)!=-9999)
    {
        if (num > maxi)
        {
            maxi = num;
        }

        scanf("%f", &num);
    }
    printf("%f", maxi);
    return 0;
}
