#include <stdio.h>
int main()
{
    char fname1[100], sname1[100], fullname[100];
    printf("fname1: ");
    scanf("%[^\n]", fname1);
    printf("sname1: ");
    scanf("%s", sname1);
    printf("fullname: ");
    scanf(" %[^\n]", fullname);
    printf("\n** Output **\n");
    printf("%s %s\n", fname1, sname1);
    printf("%s\n", fullname);
    return 0;
}
