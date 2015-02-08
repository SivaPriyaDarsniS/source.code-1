#include <stdio.h>
int main(void)
{
    // define neccesary variables
    int number;
    
    // input data to program
    scanf("%d", &number);
    
    // starting program
    if (number % 2 ==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}