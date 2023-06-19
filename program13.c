//WAP for bubble sort 
#include <stdio.h>
void BubSort(int AR[],int size);
int main(){
    int AR[50],ITEM,N,index;
    printf("Enter the numnber of elements you want to insert in the array (max 50) : ") ;
    scanf("%d",&N);
    for(int i = 0 ; i < N ; i++){
        printf("Enter the %d index element : " , i );
        scanf("%d",&AR[i]);
    } 
    printf("\n");
    BubSort(AR,N);
    printf("The sorted array is as shown below : \n"); 
    for ( int i = 0 ; i < N ; i++){
        printf("%d ",AR[i]);
    }
    printf("\n");
}
void BubSort(int AR[], int size){
    int tmp = 0 ;
    int ctr = 0;
    int pos;
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < (size - 1) ; j++){
            if (AR[j] > AR[j+1]){
                tmp = AR[j];
                AR[j]=AR[j+1];
                AR[j+1]=tmp;
            }
        }
    printf("Array after iteration %d is : " , ++ctr);
    for (int k = 0 ; k < size ; k++){
        //cout << AR[k] << " " ;
        printf("%d   ",AR[k]);
    }   
    printf("\n");
    //cout << endl;
}
}