#include <stdio.h>
int main(int argc, char const *argv[])
{
    int clock = 0;
    double x;
    double dx;
    scanf("%lf %lf", &x, &dx);
    double a, fa, fx;

    while (clock < 5)
    {
        a = x + dx;
        fa = 3 * a * a - 6 * a + 2;
        fx = 3 * x * x - 6 * x + 2;
        printf("Ans is %lf\n", ((fa - fx) / dx));
        dx = dx * dx;
        clock++;
    }
    for (int i = 0; i < 5; i++)
    {
        a=x+dx;
        fa=3*a*a-6*a+2;
        fx=3*x*x-6*x+2;
        printf("%.10lf\n",(fa-fx)/dx);
        printf("%s %e\n","now dx is ",dx);
        dx=dx*0.1;
    }
    
    return 0;
}