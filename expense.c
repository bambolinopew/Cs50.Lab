#include<stdio.h>
#include<cs50.h>
int main(void) {
    int total=0;
    for (int i=0;i<7;i++)
    {
        int expense=get_int("Enter expense for day: ");
            total+=expense;
    }
            printf("Total weekly expense:%d\n",total);
            return 0;
}
