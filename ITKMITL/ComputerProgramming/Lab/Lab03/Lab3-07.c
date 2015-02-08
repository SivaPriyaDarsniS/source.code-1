#include <stdio.h>
int main(void)
{
    // define necessary variables
    int seconds;
    int time_in_hours, time_in_minutes, time_in_seconds;

    //input data to program
    scanf("%d", &seconds);

    // calculate and store data to variables
    time_in_hours = seconds/3600;
    time_in_minutes = (seconds-(time_in_hours*3600))/60;
    time_in_seconds = (seconds-(time_in_hours*3600)-(time_in_minutes*60));

    // print output
    printf("%d ", seconds);
    printf("s = %d h %d m %d s\n", time_in_hours, time_in_minutes, time_in_seconds);
}
