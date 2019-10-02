#include <stdio.h>
// #include "myutil.h"

int main(int argc, char const *argv[])
{
    // variables
    int product, item;

    // read variables
    scanf("%d %d", &item, &product);

    // check zero and multiply
    if (item != 0)
        product *= item;

    // print product
    printf("%d\n", product);
    return 0;
}
