#include <stdio.h>
int main(void)
{
    // define neccessary variables
    int rows, space;
    int i, j;
    
    // input data to program
    scanf("%d", &rows);
    
    // calculate section
    space = rows - 1;
        
    // print output
    for (i = 1; i <= rows; i++)
    {
        int number = 1;
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for ( j = 1; j <= i; j++)
        {
            printf("%d", number);
            number++;
        }
        number -= 2;
        for ( j = 1; j < i; j++)
        {
            printf("%d", number);
            number--;
        }
        // calculate before next loop
        space--;
        printf("\n");
    }
}