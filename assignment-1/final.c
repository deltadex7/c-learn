/****
 * FINAL PASS
 * How much score you need in the final exam to pass
 * 
 * Formula:
 * minAvg = finalScore * (percentage/100) + nowAvg * ((100 - percentage)/100)
 * finalScore = (minAvg - nowAvg * ((100 - percentage)/100)) * (100/percentage)
 * 
 * Steps:
 * 1. Read the desired grade, minimum average, current average, and
 *    final exam percentage
 * 2. Calculate final score using above formula
 * 3. Print final score required:
 *    If requirement is negative, print "Any score doesn't matter"
 *    If requirement is more than 100, print "It's impossible"
 *    Else print "You need a score of {final score} on the final"
 *    And append with "to get a {grade}."
 * */

#include <stdio.h>
// #include "myutil.h"  // own header to print program title

int main(int argc, char const *argv[])
{
    // printTitle("FINAL PASS"); // own function to print program title

    // 1. Read required variables
    char grade;
    printf("Enter desired grade> ");
    scanf("%c", &grade);

    float minAvg,    // minimum average
          nowAvg,    // current average
          finalPerc; // finals percentage
    printf("Enter minimum average required> ");
    scanf("%f", &minAvg);
    printf("Enter current average in course> ");
    scanf("%f", &nowAvg);
    printf("Enter how much the final counts\nas a percentage of the course grade> ");
    scanf("%f", &finalPerc);

    // 2. Calculate final score
    float finalScore = (minAvg - nowAvg * ((100 - finalPerc)/100)) * (100/finalPerc); 

    // 3. Print final score required
    if (finalScore <= 0)
    {
        printf("Any score is okay ");
    }
    else if (finalScore > 100)
    {
        printf("It is impossible ");
    }
    else
    {
        printf("You need a score of %.2f on the final ", finalScore);
    }
    
    printf("to get a %c.\n", grade);
    return 0;
}
