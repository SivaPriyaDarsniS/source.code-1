#include <stdio.h>
#define pi 3.14159265358979323846
int main(void)
{
    // define neccessary variables
    char function;
    float base_length, height, base_width, radius;

    // input data to program
    printf("Geometry Type (c-circle, t-triangle, r-rectangle): ");
    scanf("%c", &function);

    // checking with {if} statement
    if (function == 99 || function == 67){
        printf("Enter radius (cm): ");
        scanf("%f", &radius);

        // print output
        printf("Area of this circle is %.1f square centimetres\n", pi * (radius * radius));
    }
    else{
        if (function == 116 || function == 84){
            printf("Enter base length (cm): ");
            scanf("%f", &base_length);
            printf("Enter height (cm): ");
            scanf("%f", &height);

            // print output
            printf("Area of this triangle is %.1f square centimetres\n", (base_length * height) * 0.5);
        }
        else{
            if (function == 114 || function == 82){
                printf("Enter base width (cm): ");
                scanf("%f", &base_width);
                printf("Enter height (cm): ");
                scanf("%f", &height);

                // print output
                printf("Area of this rectangle is %.1f square centimetres\n", base_width * height);
            }
            else{
                printf("Invalid Input\n");
            }
        }
    }
}
