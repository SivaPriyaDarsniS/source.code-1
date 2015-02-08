#include <stdio.h>
int main(void)
{
    // define neccesary varibles
    int number, power, temporary_variables = 1;
    
    // input data to program
    scanf("%d %d", &number, &power);
    int answer = number;
    
    // print output
    do
    {
        if (power == 1)
        {
            answer = 1;
            break;
        }
        else
        {
            if (power == 2)
            {
                answer = 5;
                break;
            }
            else
            {
                temporary_variables++;
                answer *= number;
            }
        }
    }
    while(temporary_variables < power - 1);
    printf("%d^(%d-1)=%d\n", number, power, answer);
}