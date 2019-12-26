// Finding out if triangle is isosceles or not
#include<stdio.h>
int main () {
    int a,b,c;
    printf("Enter three side of triangles in lenngth.");
    scanf("%d%d%d",&a,&b,&c);
    if (a==b || a==c || b==c || b==a)
        {printf("The triangle is isosceles triangle.");}
    else
        {printf("The triangle is not isosceles triangle.");}    
}