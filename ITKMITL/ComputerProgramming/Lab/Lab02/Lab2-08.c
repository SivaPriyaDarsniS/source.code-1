#include <stdio.h>
int main(void)
{
    char firstname[128], lastname[128], id[9], gpa[10];
    int dd, mm, yy;
    printf("Name: ");
    scanf("%s", firstname);
    printf("Surname: ");
    scanf("%s", lastname);
    printf("ID: ");
    scanf("%s", id);
    printf("DOB: ");
    scanf("%d/%d/%d", &dd, &mm, &yy);
    printf("GPA: ");
    scanf("%s", gpa);
    printf("** \\\\Output// **\n");
    printf("%s %s\n\n", firstname, lastname);
    printf("%s\n\n", id);
    printf("%02d-%02d-%d\n\n", dd, mm, yy);
    printf("%s\n", gpa);
    return 0;
}
