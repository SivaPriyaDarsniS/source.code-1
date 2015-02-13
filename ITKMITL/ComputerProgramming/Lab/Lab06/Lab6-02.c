#include <stdio.h>
int main(void)
{
    // define neccessary variables
    float array_a[3][3], array_b[3][3], multiply[3][3];
    float sum = 0.0;
    int r, c, k;

    printf("Matrix A\n");
    for (r = 0; r < 3; r++)
        for (c = 0; c < 3; c++)
            scanf("%f", &array_a[r][c]);

    printf("Matrix B\n");
    for (r = 0; r < 3; r++)
        for (c = 0; c < 3; c++)
            scanf("%f", &array_b[r][c]);

    // calculate section
    for ( r = 0; r < 3; r++)
    {
        for ( c = 0; c < 3; c++)
        {
            for ( k = 0; k < 3; k++)
            {
                sum += array_a[r][k] * array_b[k][c];
            }
        multiply[r][c] = sum;
        sum = 0.0;
        }
    }

    printf("A x B\n");
    for ( r = 0; r < 3; r++)
    {
      for ( c = 0; c < 3; c++)
        printf("%.2f ", multiply[r][c]);

      printf("\n");
    }
}
