/****
 * WATER CONSERVATION
 * 
 * Constants:
 * FLUSH_NEW = 2
 * FLUSH_OLD = 15
 * DAILY_FLUSH = 14
 * TOILET_INSTALL_COST = 150
 * 
 * Formula:
 * toilet = population / 3
 * install_cost = TOILET_INSTALL_COST * toilets
 * magnitude = (FLUSH_OLD) * toilets * DAILY_FLUSH
 * 
 * Steps:
 * 
    // 1. input population
    // 2. count amount of toilets, install cost, and magnitude saved
    // 3. output install cost and saved water
 * */

#include <stdio.h>
#define FLUSH_NEW 2
#define FLUSH_OLD 15
#define DAILY_FLUSH 14
#define TOILET_INSTALL_COST 150

int main(int argc, char const *argv[])
{
    // 1. input population
    long population;
    printf("Enter the number of population> ");
    scanf("%ld", &population);

    // 2. count amount of toilets, install cost, and magnitude saved
    long toilets = population / 3;
    long install_cost = TOILET_INSTALL_COST * toilets;
    long magnitude_saved = (FLUSH_OLD - FLUSH_NEW) * toilets * DAILY_FLUSH;

    // 3. output install cost and saved water
    printf("By installing %ld new toilets for $%ld,\n", toilets, install_cost);
    printf("the community could save %ld liters of water per day.\n", magnitude_saved);

    return 0;
}
