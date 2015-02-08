#include <stdio.h>
int main(void)
{
    // define neccessary variables
    int i, department_date, arrived_date;
    int sport_shoes = 0, boots = 0, flipflop = 0;
    
    // starting program
    do
    {
        // input data to program
        scanf("%d %d", &department_date, &arrived_date);
        
        // starting condition
        if (arrived_date < 31 && department_date <= arrived_date && department_date > 0)
        {
            for (i = department_date; i <= arrived_date; i++)
            {
                // this is information: she have to use 3 shoes in each day.

                // if date was 9, 18 or 27, she will choose boots.
                if (i % 9 == 0)
                {
                    boots += 3;
                }
                else
                {
                    // if date was Even, she will choose 1 flipflop and sport shoes twice
                    if (i % 2 == 0)
                    {
                        flipflop += 1;
                        sport_shoes += 2;
                    }
                    else
                    {
                        sport_shoes += 3;
                    }
                }
            }
            
            // print output
            printf("sport shoe %d\n", sport_shoes);
            printf("boots %d\n", boots);
            printf("flipflop %d\n", flipflop);
            break;
        }
        else
        {
            printf("Date Error\n");
        }
    }
    while (1);
    // 1 mean True
}
        