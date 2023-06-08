//Code for switch case implementation
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    switch (n % 2)
    {
    case 0:
        printf("the number %d is even \n",n);
        break;
    
    case 1 :
        printf("The number %d is odd \n",n);
        break;
    
    default:
        printf("Enter a valid output");
        break;
    }
}