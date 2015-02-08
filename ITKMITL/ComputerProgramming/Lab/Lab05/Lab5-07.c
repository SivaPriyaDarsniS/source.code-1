#include <stdio.h>
int main(void)
{
    // define neccessary variables
    int number, i;
    
    // input data to program
    scanf("%d", &number);
    
    // print output
    if (number % 2 == 0)
    {
        for (i = 1; i <= (number / 2); i++)
        {
            printf("%d", i);
        }
        for (i = (number / 2); i >= 1; i--)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    else
    {
        printf("Error\n");
    }
}