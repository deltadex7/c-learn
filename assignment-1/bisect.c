/*******
 * LINE BISECTOR
 * 
 * Print the equation of the perpendicular bisector of the line segment
 * between two points. The program should:
 * 
 * 1. prompt for two cooordinates (x and y)
 * 2. compute the slope for those two points
 * 3. compute midpoint coordinate
 * 4. compute perpendicular slope
 * 
 * */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 1. prompt for two coordinates
    float x1, y1, x2, y2;
    printf("Enter the first coordinate (x y)> ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the second coordinate (x y)> ");
    scanf("%f %f", &x2, &y2);
    
    // 2. compute slope
    float m1 = (y2-y1) / (x2-x1);

    // 3. compute midpoint (xm, ym)
    float xm = (x1 + x2)/2;
    float ym = (y1 + y2)/2;

    // 4. compute slope of perpendicular bisector
    float m2 = (-1) / m1;

    // 5. compute y-intercept (b) 
    // formula: y = mx + b
    //          b = y - mx
    float b = ym - m2 * xm;

    // 6. outputs:
    //    * original two points
    //    * perpendicular formula in y = mx + b
    printf("Original points: (%.1f, %.1f) (%.1f, %.1f)\n", x1, y1, x2, y2);
    printf("Perpendicular bisector: y = %.1fx", m2);
    if (b < 0)
    {
        printf(" - %.2f", -b);
    }
    else if (b > 0)
    {
        printf(" + %.2f", b);
    }
    else
    {
        /* print nothing */
    }

    printf("\n"); 

    return 0;
}
