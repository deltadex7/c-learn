#include <stdio.h>

int main(int argc, char const *argv[])
{
    double ph;
    char *result;

    scanf("%lf", &ph);

    // check alkaline
    if (ph > 7)
    {
        if    (ph <  12)  result = "Alkaline";
        else /*ph >= 12*/ result = "Very alkaline";
    }
    // check neutral
    else if   (ph == 7)   result = "Neutral";
    // check acid
    else
    {
        if    (ph >  2)   result = "Acidic";
        else /*ph <= 2*/  result = "Very acidic";
    }    

    printf("%s\n", result);

    return 0;
}
