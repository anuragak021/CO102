//WAP for insertion sort 
#include <stdio.h>
void InsSort(int AR[],int size);
int main(){
    int AR[50],ITEM,N,index;
    printf("Enter the numnber of elements you want to insert in the array (max 50) : ") ;
    scanf("%d",&N);
    for(int i = 0 ; i < N ; i++){
        printf("Enter the %d index element : " , i );
        scanf("%d",&AR[i]);
    } 
    printf("\n");
    InsSort(AR,N);
    printf("The sorted array is as shown below : \n"); 
    for ( int i = 0 ; i < N ; i++){
        printf("%d ",AR[i]);
    }
    printf("\n");
}
void InsSort(int AR[], int size){
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = AR[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && AR[j] > key) {
            AR[j + 1] = AR[j];
            j = j - 1;
        }
        AR[j + 1] = key;
    printf("Array after iteration %d : ", i );
    for (int k = 0 ; k < size ; k++){
        printf("%d  ", AR[k]);
    }   
    printf("\n");
    }
}