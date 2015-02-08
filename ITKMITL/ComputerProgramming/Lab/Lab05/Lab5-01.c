#include <stdio.h>
int main(void)
{
    // define neccessary variables
    int number, i = 1;
    
    // input data to program
    scanf("%d", &number);
    
    // print output with {for}
    while (i <= number)
    {
        printf("%d ", i);
        i++;
    }
}