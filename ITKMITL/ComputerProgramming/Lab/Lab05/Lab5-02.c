#include <stdio.h>
int main(void)
{
    // define neccesary variables
    int number;
    
    // input data to program
    scanf("%d", &number);
    int i = number;
    
    // print output
    do
    {
        printf("%d ", i);
        i--;
    }
    while (i > 0);
}