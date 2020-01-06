#include<stdio.h>
int main () {
    int a,money;
    printf("Enter your number of calls this month.");
    scanf("%d",&a);
    if (a<=30)
        {money=0;}
    else if (a>=31 && a<=60)
        {money=0.5*(a-30);}
    else
        {money=1*(a-60);}
    printf("Your bill this month is:Rs.%d",money);            
}