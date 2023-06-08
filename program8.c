//WAP to print power of a given number using a loop
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter a  number : ");
    scanf("%d",&a);
    printf("Enter the power till which you want it to be raised : ");
    scanf("%d",&b);
    int ans = 1;
    for(int i = 0 ; i < b ; i++){
        ans = ans*a;
    }
    printf("%d is the answer \n",ans);
}