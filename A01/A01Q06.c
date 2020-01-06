/*Writ a program to find out the difference between thwe geeratest and the smallest number form the given threee numbers */
#include <stdio.h>
int main()
{
    float num1,num2,num3,lar,smo;
    printf("Enter three numbers\n");
    scanf("%f%f %f",&num1,&num2,&num3);
   

    if(num1<num2 && num1<num3){
           smo=num1;
    }
    else if(num2<num3){
        
       smo=num2;
    }
    else{
        smo=num3;
    }
    if(num1>num2 && num1>num3){
           
        lar=num1;
    }
    else if(num2>num3){
      
        lar=num2;
    }
    else{
        lar=num3;
    }
   printf("Difference between largest and smallest number is:%f",lar-smo);
}
