/****
 * FREEZER POWER FAILURE
 * by @deltadex7
 * 
 * Task: Calculate the estimated temperature given the elapsed time
 * since a power failure.
 * 
 * Given: `T = (4 * t * t)/(t + 2) - 20`
 * 
 * Steps:
 * 1. Input time in hours and minutes, delimited by space
 * 2. Convert the time to hours
 * 3. Calculate the temperature using the given formula
 * 4. Output the temperature
 * 
 * NOTE:
 * * T is in Celsius
 * */

#include <stdio.h>
#include "myutil.h"

int main(int argc, char const *argv[])
{
    printTitle("FREEZER POWER FAILURE");

    // 1. Input time in hours and minutes, delimited by space
    int hours, minutes;
    printf("Time elapsed since power failure (hh mm): ");
    scanf("%d %d", &hours, &minutes);

    // 2. Convert the time to hours
    float total_hours = hours + (minutes/60.0f);

    // 3. Calculate the temperature using the given formula
    float temperature = (4 * total_hours * total_hours)/((total_hours) + 2) - 20;

    // 4. Output the temperature
    printf("Estimated temperature: %.2f C\n", temperature);
    return 0;
}
