#include <stdio.h>
int main(){
    int principle, rate, time;
    printf("Enter the principle : ");
    scanf("%d",&principle);   
    printf("Enter the rate : ");
    scanf("%d",&rate);
    printf("Enter the time : ");
    scanf("%d",&time);
    int simple_interest = (principle*rate*time)/100;
    printf("The simple interest at %d principle, %d rate, %d time , is --> %d ", principle,rate,time,simple_interest); 
}