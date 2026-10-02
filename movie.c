#include<stdio.h>
#include<cs50.h>
int main(void) {
    int age=get_int("Enter your age:");
    if (age<12)
    {
        printf("Ticket price 100 taka\n");
    }
    else if (age>=12 && age<=25)
    {
        printf("Ticket price 150 taka\n");
    }
    else {
        printf("Ticket price 250 taka\n");
    }
    return 0;
}
