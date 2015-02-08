#include <stdio.h>
int main(void)
{
    // define neccessary variables
    int jenny_age;

    // input data to program
    scanf("%d", &jenny_age);

    // print output
    printf("total of ex-boyfriend = %d\n", ((30 - jenny_age) * 12) / 15);
    printf("date with current boyfriend for %d months\n", ((30 - jenny_age) * 12) % 15);
}
