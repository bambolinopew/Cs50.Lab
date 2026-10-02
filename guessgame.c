#include<stdio.h>
#include<cs50.h>
int main(void) {
    int secret=25;
    {
        int guess=get_int("Enter guess:");
        if(guess<25)
        {
            printf("Low\n");
        }
        else if(guess>25)
        {printf("High\n");}
        else
        {
            printf("correct!!\n");
        }
    }
    return 0;
}
