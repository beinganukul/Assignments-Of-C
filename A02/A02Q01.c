#include<stdio.h>
int main() {
    int a,b=0,c;
    printf("Enter an integer number: ");
    scanf("%d",&a);
    while(a!=0) {
        c=a%10;
        b=b*10+c;
        a /=10;
    }
    printf("Reversed number is : %d ",b);
}