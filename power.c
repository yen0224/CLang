#include <stdlib.h>
#include <algorithm>
#include <time.h>
int main(int argc, char const *argv[])
{
    int elec[24];
    int sum=0;
    for (int i = 0; i < 24; i++)
    {
        srand(time(NULL));
        int ra=rand()%1000;
        elec[i]=ra;
        sum+=ra;
    }
    sort(elec,elec+24);
    //min
    printf("%d",elec[0]);
    printf("%d",elec[24]);
    return 0;
}
