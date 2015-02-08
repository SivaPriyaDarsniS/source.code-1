#include <stdio.h>
int main(void)
{
    // define neccesary variables
    int i, space, height, temporary_variable = 0;
    
    // input data to program
    scanf("%d", &height);
    
    // print output with {for} and {while}
    for (i = 1; i <= height; ++i)
    {
        for (space = 1; space <= height - i; ++space)
        {
           printf(" ");
        }
        
        while (temporary_variable != 2 * i - 1)
        {
           printf("*");
           ++temporary_variable;
        }
        
        temporary_variable = 0;
        printf("\n");
    }
}