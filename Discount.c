#include<stdio.h>
#include<cs50.h>
int main(void) {
    float amount=get_float("Enter amount:");
    float final_amount;

    if(amount>5000) {
        final_amount=amount*0.80;
    }
    else if (amount>2000)
    {
        final_amount=amount*0.90;
    }
    else {
        final_amount=amount;
    }
    printf("Final amount=%.f\n",final_amount);
    return 0;
}
