#include <stdio.h>
int main(int argc, char const *argv[])
{
    int min,sec;
    int totalsec;
    scanf("%d:%d",&min,&sec);
    totalsec=min*60+sec;
    int seperate=totalsec/20;
    for (int i = 0; i < totalsec; i+=seperate)
    {
        printf("%d:%d\n",i/60,i%60);
    }
    

    return 0;
}
