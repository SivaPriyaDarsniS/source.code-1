#include <stdio.h>
int main(void)
{
    // define necessary variables
    int i, j, rows, character = 97, number = 0;
    
    // input data to program
    scanf("%d", &rows);
    
    // print output
    for (i = 1; i <= rows; ++i)
    {
        for(j = 1; j <= i; ++j)
        {
           printf("%c", character + number);
        }
        printf("\n");
        number++;
    }
}