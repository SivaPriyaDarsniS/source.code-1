#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool stop = false;
    int number, answer = 0;
    
    while (!stop)
    {
        scanf("%d", &number);
        if (number == -9)
        {
            stop = true;
        }
        else
        {
            answer += number;
        }
    }
    printf("%d\n", answer);
}