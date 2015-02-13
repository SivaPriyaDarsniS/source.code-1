#include <stdio.h>
#include <string.h>
int main(void)
{
    // define neccessary variable
    int i;
    char string[200];

    // starting program
    // input data to program
    scanf(" %[^\n]", string);
    for (i = strlen(string) - 1; i >= 0; i--)
        printf("%c", string[i]);
    printf("\n");
}
