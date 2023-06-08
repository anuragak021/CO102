//WAP to display grades
#include <stdio.h>
int main(){
    float maths,phy,chem,perc;
    printf("Enter your marks in maths : ");
    scanf("%f",&maths);
    printf("Enter your marks in chemistry : ");
    scanf("%f",&chem);
    printf("Enter your marks in physics : ");
    scanf("%f",&phy);
    perc = (((maths + phy + chem ) *100)/300);
    if ( maths == 0 || phy == 0 || chem == 0 ){
        printf("FAIL ");
    }
    else if (perc >= 75){
        printf("Distinction ");
    }
    else if(perc >= 60 && perc <= 75){
        printf("First Class");
    }
    else if(perc >= 50 && perc <= 60){
        printf("Second Class");
    }
    else if(perc >= 40 && perc <= 50){
        printf("Third Class");
    }
    else if (perc < 40){
        printf("Fail");
    }
}