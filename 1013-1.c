#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    int sum = 0;
    scanf("%d", &num);
    //使用遞減
    /*for (int i = num; i >0; i--)
    {
        if ((i%5==0)||(i%7==0))
        {
            continue;
        }
        else
        {
            sum+=i;
        }
    }*/
    //使用遞增
    for (int i = 0; i <= num; i++)
    {
        if ((i % 5 == 0) || (i % 7 == 0))
        {
            continue;
        }
        else
        {
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}
