#include <stdio.h>
int main(void)
{
    // define neccessary variables
    int array_m[8] = {2, 20, 8, 10, 4, 6, 16, 18};
    int array_n[8] = {1, 3, 9, 7, 11, 15, 19};
    int i, number, count = 0;

    // starting program
    // input data to program
    do
    {
        scanf("%d", &number);
        if (number > 0 && number <= 20)
            break;
    }
    while (1);

    // checking data from specific array
    for (i = 0; i <= 7; i++)
    {
        if (array_m[i] == number)
        {
            printf("%d is in M at index [%d]\n", number, i);
            count++;
            break;
        }
        else
        {
            if (array_n[i] == number)
            {
                printf("%d is in N at index [%d]\n", number, i);
                count++;
                break;
            }
        }
    }

    if (count == 0)
    {
        printf("%d is not in neither M nor N\n", number);
    }


}
