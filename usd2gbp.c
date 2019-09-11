/****
 * US DOLLARS TO BRITISH POUNDS
 * 
 * TASK: Convert US Dollar currency to British Poundsterling
 * 
 * STEPS:
 * 1. Input Dollar value
 * 2. Calculate conversion
 * 3. Output Pound value
 * 
 * NOTE:
 * 1 USD = 0.65 GBP
 * */

#include <stdio.h>
#include "myutil.h"

int main(int argc, char const *argv[])
{
    const float USD_GBP = 0.65f;

    printTitle("USD TO GBP");

    // 1. Input Dollar value
    double dollar;
    printf("USD = ");
    scanf("%lf", &dollar);

    // 2. Calculate conversion
    double pound = dollar * USD_GBP;

    // 3. Output Pound value
    printf("GBP = %.2lf\n", pound);

    return 0;
}
