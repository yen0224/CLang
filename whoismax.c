#include <stdio.h>
int main()
{
    int largest = 0;
    int inputnumber;
    int ct = 0;
    while (ct < 10)
    {
        scanf("%d", &inputnumber);
        if (inputnumber > largest)
            largest = inputnumber;
        //printf("%s %d\n", "current maximun number is: ", largest);
        ct++;
    }
    printf("%d", largest);
    return 0;
}