#include <stdio.h>
#include <math.h>
int main(void)
{
    // define neccessary variables
    int x_1, y_1, x_2, y_2;

    // print output
    scanf("%d", &x_1);
    scanf("%d", &y_1);
    scanf("%d", &x_2);
    scanf("%d", &y_2);

    // print output
    printf("%.2f\n", sqrt(pow(x_1 - x_2, 2) + pow(y_1 - y_2, 2)));
}
