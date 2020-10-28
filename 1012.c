#include <stdio.h>
#include <math.h>
int fact(int n)
{
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}
int main(int argc, char const *argv[])
{
    int time = 5;
    float x;
    float ss = 0;
    float cs = 0;
    scanf("%f", &x);
    for (int n = 0; n <= time; n++)
    {
        ss = ss + (pow(-1, n) / fact(2 * n + 1)) * pow(x, 2 * n + 1);
        cs = cs + (pow(-1, n) / fact(2 * n)) * pow(x, 2 * n);
    }
    printf("%s %f %s %f\n", "sin(", x, ") is", ss);
    printf("%s %f %s %f\n", "cos(", x, ") is", cs);
    return 0;
}
