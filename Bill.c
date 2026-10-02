#include<stdio.h>
#include<cs50.h>
int main(void) {
    int units=get_int("enter units consumed:");
    if(units<=100) {
        printf("taka 5 per unit\n");
    }
    else {
        printf("taka 8 per unit\n");
    }
    return 0;
}
