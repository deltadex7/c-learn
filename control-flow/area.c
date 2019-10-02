#include <stdio.h>
#define PI 3.14159

int main(int argc, char const *argv[])
{
    char option = '\0'; 
    double a = 0, result = 0;

    if (argc > 1)
    {
        sscanf(argv[1], "%c", &option);
        if (argc > 2)
        {
            sscanf(argv[2], "%lf", &a);
        }
        
    }
    
    (option == '\0') && (scanf("%c", &option));

    if (option == 's' || option == 'S')
    {
        (a == 0) && (scanf("%lf", &a));
        result = a * a;
    }
    else if (option == 'c' || option == 'C')
    {
        (a == 0) && (scanf("%lf", &a));
        result = a * a * PI;
    }
    else
    {
        printf("Invalid option!\n");
        return 1;
    }
    
    printf("%lf\n", result);

    return 0;
}
