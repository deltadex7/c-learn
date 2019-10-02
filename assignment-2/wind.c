#include <stdio.h>

int main(int argc, char const *argv[])
{
    int wind;
    scanf("%d", &wind);

    // check minimum limit
    if (wind < 25)
        printf("not a strong wind\n");
    else if (25 <= wind && wind <= 38)
        printf("strong wind\n");
    else if (39 <= wind && wind <= 54)
        printf("gale\n");
    else if (55 <= wind && wind <= 72)
        printf("whole gale\n");
    else
        printf("hurricane\n");

    return 0;
}
