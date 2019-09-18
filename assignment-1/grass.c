/******
 * GRASS CUTTER
 * 
 * Calculate the time required to cut the grass in a 
 * rectangular yard with a house inside at a rate of
 * two square feet a second.
 * 
 * Formula:
 * a_yard = w_yard * h_yard
 * a_house = w_house * h_house
 * a_grass = a_yard - a_house
 * >> a_grass = (w_yard * h_yard) - (w_house * h_house)
 * 
 * time = a_grass / 2
 * >> time = ((w_yard * h_yard) - (w_house * h_house)) /2
 * 
 * Steps:
 * 1. Input width ad height of the yard and the house
 * 2. Calculate time using the above formula
 * 3. Output the time 
 * */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 1. Input width ad height of the yard and the house
    int w_yard, h_yard, w_house, h_house;
    printf("Enter the width and height of the yard, separated in space\n> ");
    scanf("%d %d", &w_yard, &h_yard);
    printf("Enter the width and height of the house, separated in space\n> ");
    scanf("%d %d", &w_house, &h_house);

    // 2. Calculate time using the above formula
    float time = ((w_yard * h_yard) - (w_house * h_house)) / 2.0f;

    // 3. Output the time 
    printf("Time required to cut the grass is %.2f seconds.\n", time);
    return 0;
}
