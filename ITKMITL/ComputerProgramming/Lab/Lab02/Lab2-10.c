#include <stdio.h>
int main(void)
{
    char a, b, c, d, e;
    printf("Input1: ");
    scanf(" %c", &a);
    printf("Input2: ");
    scanf(" %c", &b);
    printf("Input3: ");
    scanf(" %c", &c);
    printf("Input4: ");
    scanf(" %c", &d);
    printf("Input5: ");
    scanf(" %c", &e);
    printf("**********\n");
    if (a >= 97) {
        printf("Output1: %c\n", (a-'a'+1)%26+97);
    } else {
        printf("Output1: %c\n", (a-'A'+1)%26+65);
    }
    printf("Output2: %c\n", b);
    if (c >= 97) {
        printf("Output3: %c\n", (c-'a'+1)%26+97);
    } else {
        printf("Output3: %c\n", (c-'A'+1)%26+65);
    }
    printf("Output4: %c\n", d);
    if (e >= 97) {
        printf("Output5: %c\n", (e-'a'+1)%26+97);
    } else {
        printf("Output5: %c\n", (e-'A'+1)%26+65);
    }
    return 0;
}
