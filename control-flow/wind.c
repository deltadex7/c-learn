#include <stdio.h>

int main(int argc, char const *argv[])
{
    int wind;
    scanf("%d", &wind);

    // check minimum limit
    if (wind <= 72)
    {
        // 39 <= wind <= 72
        if (wind >= 39)
        {
            // 39 <= wind <= 54
            if (wind <= 54 )
                printf("gale\n");
            // 55 <= wind <= 72
            else
                printf("whole gale\n");
        }
        // wind <= 38
        else 
        {
            // wind < 25
            if (wind < 25)
                printf("not a strong wind\n");
            // 25 <= wind <= 38
            else
                printf("strong wind\n");
        }
    }
    // wind > 72
    else
    {
        printf("hurricane\n");
    }
    
    return 0;
}
