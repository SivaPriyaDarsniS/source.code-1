#include <stdio.h>
int main(void)
{
	// define neccessary variables
	int order, change, money;
	char name[100];

	// input data to program
	scanf("%d", &order);
	scanf(" %[^\n]", name);
	scanf("%d", &change);
	scanf("%d", &money);

	// calculate
	int cost = money - change;
	int a = cost/500, b = (cost%500)/100, c = ((cost%500)%100)/50,
		d = (((cost%500)%100)%50)/10, e = ((((cost%500)%100)%50)%10)/5,
		f = (((((cost%500)%100)%50)%10)%5)/1;

	// print output
	printf("                              Transaction ID: %03d\n", order);
	printf("- %s -\n", name);
	printf("Change: %d\n", money-change);
	printf("+-----------------------------------------------+\n");
	printf("| Coin\\Bank |    1|    5|   10|   50|  100|  500|\n");
	printf("+-----------------------------------------------+\n");
	printf("| Number    |    %d|    %d|    %d|    %d|    %d|    %d|\n", f, e, d, c, b, a);
	printf("+-----------------------------------------------+\n");
}
