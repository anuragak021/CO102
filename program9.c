//WAP to print operator precedence
#include <stdio.h>
int main(){
    int a , b , c , d, e;
    printf ("Enter the 1st integer : ");
    scanf("%d",&a);
    printf ("Enter the 2nd integer : ");
    scanf("%d",&b);
    printf ("Enter the 3rd integer : ");
    scanf("%d",&c);
    printf ("Enter the 4th integer : ");
    scanf("%d",&d);
    printf("a: %d\nb: %d\nc: %d\nd: %d\n",a,b,c,d);
    e = (a+b)*c/d;        
    printf("value of (%d+%d)*%d/%d is : %d\n",a,b,c,d,e);
    e = ((a+b)*c)/d;
    printf("value of ((%d+%d)*%d)/%d is : %d\n",a,b,c,d,e);
    e = (a+b)*(c/d);
    printf("value of (%d+%d)*(%d / %d) is : %d\n",a,b,c,d,e);
    e = a+(b*c)/d;
    printf("value of (%d+%d)*%d/%d is : %d\n",a,b,c,d,e);
}