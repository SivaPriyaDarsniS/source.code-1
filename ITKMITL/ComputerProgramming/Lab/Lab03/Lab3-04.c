#include <stdio.h>
int main(void)
{
    // define neccessary variables
    float number1, number2, number3, answer;
    scanf("%f %f %f", &number1, &number2, &number3);

    // calculate
    answer = (number1 + number2)*(number1 - number2)/number3;
    // print output
    printf("Result: (%.1f+%.1f)*(%.1f-%.1f)/%.1f=%.5f\n", number1, number2, number1, number2, number3, answer);
    return 0;
}
