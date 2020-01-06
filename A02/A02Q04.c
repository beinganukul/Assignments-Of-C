#include<stdio.h>
int main () {
    int a,b,c=0;
    printf("Enter a positive integer number.");
    scanf("%d",&a);
    for ( b=1; b<=a;++b)
    {
        c +=b;
    }
    printf("Sum= %d",c);
}