// Area of triangle by anju
#include<stdio.h>
#include<math.h>
int main () {
    float a,b,c,s,A;
    printf("Enter three sides of a triangle.");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c || b+c>a || a+c>b)
    {
        printf("Triangle is valid \n");
        s=(a+b+c)/2;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The area of triangle is %d",A);

    }
    else
        {printf("Triangle is not valid");}
}
