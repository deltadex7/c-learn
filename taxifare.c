/******************************************************
 * TAXI FARE CALCULATOR
 * by @deltadex7
 * 
 * 1. Read inputs: beginnng and ending odometers
 * 2. Calculate distance from inputs
 * 3. Calculate fare ($1.50/mile)
 * 4. Print distance and fare
 * 
 *******************************************************/

#include <stdio.h>
#define FARE_PER_MILE 1.50

int main(int argc, char const *argv[])
{
    /* 0. Print introductory interface */
    printf("TAXI FARE CALCULATOR\n");
    printf("by @deltadex7\n\n");

    /* 1. Read inputs: beginning and ending odometer readings */
    double odo_begin, odo_end;

    printf("Enter beginning odometer reading => ");
    scanf("%lf", &odo_begin);

    printf("Enter ending odometer reading => ");
    scanf("%lf", &odo_end);

    /* 2. Calculate distance from inputs */
    double distance = odo_end - odo_begin;

    /* 3. Calculate fare at $1.50/mile */
    double fare = distance * FARE_PER_MILE;

    /* 4. Print distance and fare */
    printf("You traveled a distance of %.2lf miles.\n", distance);
    printf("At $%.2lf per mile, your fare is $%.2lf\n", FARE_PER_MILE, fare);

    return 0;
}
