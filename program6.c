//WAP to check whether the program is positive or negative
#include <stdio.h>
int main(){
    int n ;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n > 0){
        printf("Is is positive\n");
    }
    else if (n < 0){
        printf("Is is negative\n");
    }
    else{
        printf("it is zero \n");
    }
}