#include <stdio.h>
int main(void)
{
    // define neccesary variables
    int loop, i;
    float number, list, maximum, minimum;
    
    // input data to program
    scanf("%d", &loop);
    
    // starting program process
    for (i = 1; i <= loop; i++)
    {
        scanf("%f", &number);
        list += number;
        
        // starting condition checking
        if (minimum > number || i == 1)
            minimum = number;
        if (maximum < number || i == 1)
            maximum = number;
    }
    
    // print output
    printf("%d Values\n", loop);
    printf("Min: %.3f\n", minimum);
    printf("Max: %.3f\n", maximum);
    printf("Avg: %.3f\n", list/loop);
}