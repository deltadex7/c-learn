#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y;
    scanf("%d %d", &x, &y);

    int abs = x - y;
    if (abs < 0) abs = -abs;

    printf("%d\n", abs);
    return 0;
}
