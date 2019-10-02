#include <stdio.h>

int main(int argc, char const *argv[])
{
    int press;

    scanf("%d", &press);

    if (press < 120)
        printf("normal\n");
    else if (press >= 140)
        printf("hypertension\n");
    else
        printf("pre-hypertension\n");    

    return 0;
}
