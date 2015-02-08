#include <stdio.h>
int main(void)
{
    // define neccesary variables
    char grade;

    // input data to program
    scanf("%c", &grade);

    // print output
    switch (grade)
    {
        case 65: printf("Genius\n"); break;
        case 66: printf("Good\n"); break;
        case 67: printf("Try Harder\n"); break;
        case 68: printf("Very Bad\n"); break;
        case 70: printf("Fail\n"); break;
        default: printf("Invalid Input\n"); break;
    }
}
