//WAP to take input and print sum and avergae of two numbers
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    int sum = a + b;
    int avg = (a+b)/2;
    printf("Sum of %d and %d is : %d \n",a,b,sum);
    printf("Avg of %d and %d is : %d ",a,b,avg);
}