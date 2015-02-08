#include <stdio.h>
#define pi 3.1416
int main(void)
{
    // define neccesary variables
    float null_in_centimetres, radius;

    // input data to program
    scanf("%f", &null_in_centimetres);

    // calculate
    radius = null_in_centimetres/2.0;

    // print output
    printf("Volume: %.4f m^3\n", (4.0/3.0) * pi * (radius * radius * radius)/1000000.0);
    printf("Surface Area: %.4f m^2\n", 4.0 * pi * (radius * radius)/10000.0);
}
