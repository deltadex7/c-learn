/***********************************
 * DAM POWER CALCULATOR
 * by @deltadex7
 * 
 * 1. Prompt for dam height (m) and water flow (m^3/s)
 * 2. Calculate `mass = flow * m3_kg`
 * 3. Calculate `work = mass * gravity * height`
 * 4. Calculate `power = work * efficiency`
 * 5. Print power (MW)

 * NOTE: 
 * `m3_kg` = 1000
 * `gravity` = 9.8 m/(s^2)
 * `efficiency` = 0.9
 *************************************/

#include <stdio.h>
#include "myutil.h"

int main(int argc, char const *argv[])
{
    const float GRAVITY = 9.8f;
    const float EFFICIENCY = 0.9f;
    const float M3_KG = 1000;

    printTitle("DAM POWER CALCULATOR");

    // 1. Prompt for dam height (m) and water flow (m^3/s)
    float height, flow;
    printf("Input the height of the dam: ");
    scanf("%f", &height);
    printf("Input the flow of the water in m^3/s: ");
    scanf("%f", &flow);

    // 2. Calculate `mass = flow * m3_kg`
    float mass = flow * M3_KG;

    // 3. Calculate `work = mass * gravity * height`
    float work = mass * GRAVITY * height;

    // 4. Calculate `power = work * efficiency`
    float power = (work * EFFICIENCY) / 1000000.0f;

    // 5. Print power (MW) 
    printf("With %.0f%% efficiency, the dam will generate %.2f MW of power.\n", EFFICIENCY*100, power);

    return 0;
}
