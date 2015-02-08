#include <stdio.h>
int main(void)
{
    // define neccesary variables
    int num1, num2;
    
    // input data to program
    scanf("%d %d", &num1, &num2);
    int i = num1;
    
    // check condition
    if (num1 > num2)
    {
        for (i = num1; i >= num2; i--)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (i = num1; i <= num2; i++)
        {
            printf("%d ", i);
        }
    }
}