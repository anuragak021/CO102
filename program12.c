#include <stdio.h>
void SelSort(int AR[],int size);
int main(){
    int AR[50],ITEM,N,index;
    printf("Enter the numnber of elements you want to insert in the array (max 50) : ") ;
    scanf("%d",&N);
    for(int i = 0 ; i < N ; i++){
        printf("Enter the %d index element : " , i );
        scanf("%d",&AR[i]);
    } 
    printf("\n");
    SelSort(AR,N);
    printf("The sorted array is as shown below : \n"); 
    for ( int i = 0 ; i < N ; i++){
        printf("%d ",AR[i]);
    }
    printf("\n");
}

void SelSort(int AR[],int size){
    int small , pos,tmp;
    for(int i = 0 ; i < size - 1; i++){
        small = AR[i];
        pos = i ;
        for(int j = i +1 ; j < size ; j++){
            if( AR[j] < small ){
                small = AR[j];
                pos = j;
            }
        }
        tmp = AR[i];
        AR[i] = AR[pos];
        AR[pos] = tmp;
        printf("Array after pass %d is " , i + 1);
        for(int j = 0 ; j < size ; j++){
            printf(" %d  ", AR[j]);
        }
        printf("\n");
    }
}