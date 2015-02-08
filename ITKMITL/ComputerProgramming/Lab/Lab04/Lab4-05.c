#include <stdio.h>
int main(void)
{
    // define neccesary variables
    float score;

    // input data to program
    scanf("%f", &score);

    // print output
    if (score >= 80 && score <= 100){
        printf("A\n");
    }
    else{
        if (score >= 70 && score < 80){
            printf("B\n");
        }
        else{
            if (score >= 60 && score < 70){
                printf("C\n");
            }
            else{
                if (score >= 50 && score < 60){
                    printf("D\n");
                }
                else{
                    if (score >= 0 && score < 50){
                        printf("F\n");
                    }
                    else{
                        printf("Out of Range\n");
                    }
                }
            }
        }
    }
}
