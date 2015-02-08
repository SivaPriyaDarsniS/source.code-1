#include <stdio.h>
int main(void)
{
    char text1[15], text2[15], text3[15], text4[15];
    printf("String 1: ");
    scanf("%s", text1);
    printf("String 2: ");
    scanf("%s", text2);
    printf("String 3: ");
    scanf("%s", text3);
    printf("String 4: ");
    scanf("%s", text4);
    printf("** \"Output\" **\n");
    printf("%.3s\n%.4s\n%.5s\n%.6s\n", text1, text2, text3, text4);
    return 0;
}
