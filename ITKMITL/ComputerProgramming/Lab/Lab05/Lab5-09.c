#include <stdio.h>
int main(void)
{
    // define neccesary variables
    int age, height, i, number;
    int condition_1 = 0, condition_2 = 0;
    int average_age = 0, average_height = 0;
    
    // input data to program and process
    for (i = 1; i <= 50; i++)
    {
        scanf("%d: %d %d", &number, &height, &age);
        if (age > 20 && height >= 180)
        {
            condition_1 += 1;
        }
        else
        {
            if (age > 15 && height >= 175)
            {
                condition_2 += 1;
            }
        }
        average_age += age;
        average_height += height;
    }
    
    // print output
    printf("#Age>15 and Height >= 175: %d\n", condition_2 + condition_1);
    printf("#Age>20 and Height >= 180: %d\n", condition_1);
    printf("Average Age: %.2f\n", average_age/50.0);
    printf("Average Height: %.2f\n", average_height/50.0);
}
