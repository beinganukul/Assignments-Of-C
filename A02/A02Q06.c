#include<stdio.h>
int main() {
    int a,b,c=0;
    printf("Enter a number to find prime number.");
    scanf("%d",&a);
    for(b=2;b<=a/2;++b)
    {
        if(a%b==0)
        {
            c=1;
            break;
        }
    }
    if(a==1 || c!=0)
        {printf("%d is not a prime neither.",a);}
    else
        {printf("%d is a prime number.",a);}    
}