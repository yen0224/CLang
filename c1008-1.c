#include <stdio.h>
int main()
{
    int hourA, minA, secA, hourB, minB, secB, hourOut, minOut, secOut;
    scanf("%d:%d:%d", &hourA, &minA, &secA);
    scanf("%d:%d:%d", &hourB, &minB, &secB);
    secOut = secA + secB;
    if (secOut >= 60)
    {
        minOut = secOut / 60;
        secOut %= 60;
    }
    minOut = minA + minB;
    if (minOut >= 60)
    {
        hourOut = minOut / 60;
        minOut %= 60;
    }
    hourOut = hourA + hourB;
    hourOut %= 24;
    printf("%.2d:%.2d:%.2d\n", hourOut, minOut, secOut);
    return 0;
}