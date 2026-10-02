#include<stdio.h>
#include<cs50.h>
int main(void) {
    int length=get_int("Input:");
    if (length<6)
    {
        printf("Weak password\n");
    }
    else if(length>6 && length<=10)
    {
        printf("Medium password\n");
    }
    else
    {
        printf("Strong password\n");
    }
    return 0;
}
