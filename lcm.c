/**
 * LEAST COMMON MULTIPLIER
 * by deltadex7
 * 
 * */

#include <stdio.h>
#include "myutil.h"

int main(int argc, char const *argv[])
{
    printTitle("LCM AND GCD FINDER");

    int a, b;
    printf("Give me two integers (space separated): ");
    scanf("%d %d", &a, &b);

    int f1 = a, f2 = b;
    while (f2 > 0)
    {
        int f3 = f1 % f2;
        f1 = f2;
        f2 = f3;
    }

    printf("GCD (%d, %d) = %d\n", a, b, f1);

    int lcm = (a*b)/f1;

    printf("LCM (%d, %d) = %d\n", a, b, lcm);
    
    return 0;
}
