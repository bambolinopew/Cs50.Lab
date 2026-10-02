#include<stdio.h>
#include<cs50.h>
int main(void){
    int start=get_int("Enter start:");
    int end=get_int("Enter end:");
    int count=0;
    printf("Numbers:");
    for(int i=start;i<=end;i++)
    {
        printf("%d\n", i);
        count++;
    }
    printf("Count:%d\n",count);
    return 0;
}
