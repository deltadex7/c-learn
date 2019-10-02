#include <stdio.h>

int main(int argc, char const *argv[])
{
    double gpa;
    scanf("%lf", &gpa);

    // check minimum limit
    if (gpa >= 0)
    {
        // check maximum limit
        if (gpa > 4)
        {
            printf("Invalid input!\n");
        }
        else
        {
            // 3 <= gpa <= 4
            if (gpa >= 3)
            {
                // 3 <= gpa < 3.5
                if (gpa < 3.5)
                    printf("Dean\'s list for semester\n");
                // 3.5 <= gpa <= 4.0
                else
                    printf("Highest honors for semester\n");
            }
            // 0 <= gpa < 2
            else if (gpa < 2)
            {
                // 0 <= gpa < 1
                if (gpa < 1)
                    printf("Failed semester - registration suspended\n");
                // 1 <= gpa < 2
                else
                    printf("On probation for next semester\n");
            }
            // 2 <= gpa < 3
            else
            {
                /* show no message */
            }
        }
    }
    else
    {
        printf("Invalid input!\n");
        return 1;
    }
    
    

    return 0;
}
