#include<stdio.h>
int main()
{

    int numbers[2];  
    int sum;

    printf("Enter the first number: ");
    scanf("%d", &numbers[0]);
    
    printf("Enter the second number: ");
    scanf("%d", &numbers[1]);

 
    sum = numbers[0] + numbers[1];

   
    printf("The sum of %d and %d is: %d\n", numbers[0], numbers[1], sum);

    return 0;
}

