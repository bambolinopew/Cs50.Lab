#include<stdio.h>
#include<cs50.h>
int main(void){
    int burger=get_int("Burger:");
    int pizza=get_int("pizza:");
    int juice=get_int("juice:");
    int total=(burger*250)+(pizza*500)+(juice*100);
    printf("Bill:%d\n", total);
    return 0;
}
