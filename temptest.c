#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int cnum = 1 + (rand() % 1000);
    int mynum = 0;
    char check=89;
    printf("Number = %d\n", cnum);
    scanf("%d", &mynum);
    while (check==89)
    {
        if (mynum == cnum)
        {
            printf("%s\n", "1. Excellent! You guessed the number!\n   Would you like to play again (Y or n)?");
            scanf("%s",&check);
            if (check=='Y')
            {
                srand(time(NULL));
                cnum=rand()%1000+1;
                printf("%d",cnum);
                scanf("%d",&mynum);
            }
            else{
                check=0;
            }  
        }
        else if (mynum < cnum)
        {
            printf("%s\n", "Too low. Try again.");
            scanf("%d", &mynum);
        }
        else
        {
            printf("%s\n", "Too high. Try again.");
            scanf("%d", &mynum);
        }
        
    }
    return 0;

}

   
    //return 0;