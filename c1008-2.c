#include <stdio.h>
int main()
{
    int x, y;
    scanf("(%d,%d)", &x, &y);
    if (x == 0 || y == 0)
    {
        if (x == 0 && y == 0)
            printf("%s", "在原點\n");
        else if (x == 0)
            printf("%s", "在y軸上\n");
        else
            printf("%s", "在x軸上\n");
    }
    else if (x > 0)
    {
        if (y > 0)
            printf("%s", "在第一象限\n");
        else
            printf("%s", "在第四象限\n");
    }
    else
    {
        if (y > 0)
            printf("%s", "在第二象限\n");
        else
            printf("%s", "在第三象限\n");
    }
    return 0;
}