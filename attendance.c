#include<stdio.h>
#include<cs50.h>
int main(void){
    int total=get_int("Enter Total number of classes:");
    int attended=get_int("Enter attended number of classes:");
    float percentage=((float)attended/total)*100;
    printf("Attendance: %.2f\n",percentage);
    if(percentage<75)
    {
            printf("Not eligible for exam\n");
        }
        else
        { printf("Eligible for exam\n");
    }
    return 0;
}
