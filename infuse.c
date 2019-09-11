/******************
 * INFUSION
 * by @deltadex7
 * 
 * STEPS:
 * 1. Input fluid quantity and infusion time
 * 2. Calculatr infusion rate
 * 3. Output VTBI and rate
 * 
 ********************/

#include <stdio.h>
#include "myutil.h"

int main(int argc, char const *argv[])
{
    printTitle("INFUSION");

    // 1. Input fluid quantity and infusion time
    double vtbi, time;
    printf("Volume to be infused: ");
    scanf("%lf", &vtbi);
    printf("Minutes over which to infuse: ");
    scanf("%lf", &time);
    println();

    // 2. Calculate infusion rate
    double rate = vtbi * 60 / time;    

    // 3. Output VTBI and rate
    printf("VTBI: %.0lf ml\n", vtbi);
    printf("Rate: %.0lf ml/hr\n", rate);
    return 0;
}
