//Linear Search
#include <stdio.h>
int main(){
    int arr[100], i ,j, n , pos;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        printf("Enter the value of integer for %d index : " , i);
        scanf("%d", &arr[i]);
    }
    int check = 0;
    printf("Array is \n");
    for(int k = 0; k < n; k++){
        printf("%d ",arr[k]);
    }
    printf("\nEnter the element to search(via linear search) : " );
    scanf("%d", &pos);
    for (j = 0 ; j < n ; j++ ){
        if( pos == arr[j]){
            check = 1;
            break;
        }
    }
    if(check){
        printf("%d is present at %d index \n" , pos,j );
    }
    else{
        printf("%d is not present in the array \n" ,pos);
    }
}