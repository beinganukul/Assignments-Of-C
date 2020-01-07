#include <stdio.h>
long int factorial(int number);

void main() {

    int number;
    
    printf("Enter a positive number: ");
    scanf(" %d", &number);
    
    printf("The factorial of %d is %d\n", number, factorial(number));
}

long int factorial(int number) {

    if(number >= 1)
        return number * factorial(number - 1);

    else 
        return 1;
    
}
