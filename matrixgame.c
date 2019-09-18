/**************************************
 * THE MATRIX GAME
 * 
 * RULE:
 * 1. The matrix is a 3x3 grid.
 * 2. No digit in a row/column that is equal
 * 3. Zero (0) is only considered if the matrix
 *    is not a binary matrix.
 * 
 * INPUT:
 * > n = number of plays
 * > m[0..8] = matrix digits (0..9), 3 each row
 * 
 * OUTPUT:
 * > "Correct" or "Incorrect" based on the rule above
 * 
 * EXAMPLE:
 * [case 1]
 * 1 0 0
 * 0 1 0
 * 0 0 1
 * Correct
 * 
 * [case 2]
 * 0 0 1
 * 0 1 0
 * 1 0 0
 * Correct
 * 
 * [case 3]
 * 1 0 0 
 * 0 0 1
 * 0 1 0
 * Incorrect
 * (binary, but no diagonals)
 * 
 * 1 3 2
 * 4 2 5
 * 2 1 4
 * Correct
 * 
 * 
 * 1 3 2
 * 4 2 2
 * 2 1 4
 * Incorrect
 * (digits 2 collide in the same row and column)
 * 
 * 3 3 3
 * 3 3 3
 * 3 3 3
 * Incorrect
 * (digits 3 everywhere)
 * 
 *************************************/

#include <stdio.h>
#include "myutil.h"
#define DEBUG_

/**
 * returns: 0 or 1
 * params: m (matrix array)
 * */
short check(int *m);

/**
 * returns: 0 or 1
 * params: m (matrix array)
 *         i (current index)
 * */
short match(int *m, short i);

int main(int argc, char const *argv[])
{
    printTitle("THE MATRIX GAME");

    int n;
    scanf("%d", &n);

    while (n > 0)
    {
        int m[9];
        for (short i = 0; i < 9; i++)
        {
            scanf("%d", &m[i]);
        }

        short valid = check(m);        

        if (valid)
            printf("Correct\n");
        else 
            printf("Incorrect\n");

        n--;
    }
    
    return 0;
}

short check(int *m)
{
    /**
     * a bitmap of conditions
     * [0] = diagonal
     * [1] = binary
     * [2] = matching digit
     * */
    short condition = 0b000; 

    /* check diagonal */
    if (
        ((m[0] == m[4]) && (m[0] == m[8]))
          ||
        ((m[2] == m[4]) && (m[2] == m[6]))
       )
    {
        condition ^= 0b001;
    }
    
    /* check binary */
    /** initialize **/
    condition ^= 0b010;
    for (short i = 0; i < 9; i++)
    {
        if (m[i] != 0 && m[i] != 1)
        {
            condition ^= 0b010; 
            break;
        }
    }
    
    #if defined(DEBUG_)
    
    printf("%d", condition);
    
    #endif // DEBUG_

    if (condition & 0b010)
    {
        if (condition & 0b001)
            return 1;
        else
            return 0;
    }
    else 
    {
        short value = 1;
        for (short i = 0; i < 9 && value; ++i)
        {
            value = match(m, i);
        }
        
        return value;
    }
}

short match(int *m, short i)
{
    short row = i / 3;
    short col = i % 3;


}