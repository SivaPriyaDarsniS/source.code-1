#include <stdio.h>
int main(void)
{
    // define neccessary variables
    float matrix[4][4];
    int i, j;

    // starting program
    // input data to program
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            scanf("%f", &matrix[i][j]);
        }
    }

    // checking condition
    if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2])
    {
        printf("This is a scalar matrix\n");
    }
    else
    {
        printf("This is not a scalar matrix\n");
    }

}
