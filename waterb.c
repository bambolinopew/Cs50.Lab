#include<stdio.h>
#include<cs50.h>
int main(void) {
    int glasses=get_int("Input number of glasses:");
    if (glasses<8)
    {
        printf("Drink more water\n");
    }
    else
    {
        printf("Daily goal is completed\n");
    }
    return 0;
}
