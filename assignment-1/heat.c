/****
 * HEAT DELIVERY
 * 
 * Formula:
 * 1 barrel = 42 gallons
 * 1 barrel = 5_800_000 BTU
 * heat = (gallons/42.0f * 5_800_000) * (efficiency / 100.0f)
 * 
 * Steps:
 * 1. Read the amount of gallons and efficiency
 * 2. Calculate heat delivery using the above formula
 * 3. Print the heat delivered in BTUs
 * */

#include <stdio.h>
#define BARREL_BTU 5800000

int main(int argc, char const *argv[])
{
    // 1. Read the amount of gallons and efficiency
    float gallons, efficiency;
    printf("Enter the number of gallons of oil burned> ");
    scanf("%f", &gallons);
    printf("Enter the efficiency of the house's oil furnace> ");
    scanf("%f", &efficiency);

    // 2. Calculate heat delivery using the above formula
    float heat = (gallons/42.0f * BARREL_BTU) * (efficiency / 100.0f);

    // 3. Print the heat delivery in BTUs
    printf("The heat delivered to the house is %.0f BTUs\n", heat);
    return 0;
}
