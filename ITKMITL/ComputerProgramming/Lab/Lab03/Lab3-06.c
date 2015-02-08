#include <stdio.h>
int main(void)
{
    // define necessary variables
    float number1, number2, number3, number4;

    // input data to program
    scanf("%f", &number1);
    scanf("%f", &number2);
    scanf("%f", &number3);
    scanf("%f", &number4);

    // print output
    printf("Summation is %.2f\n", number1 + number2 + number3 + number4);
    printf("Average is %.3f\n", (number1 + number2 + number3 + number4)/4.0);
}
