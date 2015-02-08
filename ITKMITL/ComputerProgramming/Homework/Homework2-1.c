#include <stdio.h>
int main(void)
{
	// define neccessary variables
	char name[100];
	int year_of_birth, current_year, age;

	// input data to program
	scanf("%[^\n]", name);
	scanf("%d", &year_of_birth);
	scanf("%d", &current_year);

	// print output
	printf("%s is %d years old.\n", name, current_year - year_of_birth);
}
