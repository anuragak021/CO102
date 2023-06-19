//Code for binary search 
#include <stdio.h>
int main(){
    int arr[100], i ,j, n , pos ,mid;

    //taking the arrays

    printf("Enter the size of array : ");
    scanf("%d",&n);

    //Taking the values in the array

    for(int i = 0; i < n; i++){
        printf("Enter the value of integer for %d index : " , i);
        scanf("%d", &arr[i]);
    }

    //Printing the arrays

    int check = 0;
    printf("Array is \n");
    for(int k = 0; k < n; k++){
        printf("%d ",arr[k]);
    }

    //Element to take input

    printf("\nEnter the element to take input : " );
    scanf("%d", &pos);

    //for binary search

    int low = 0;
    int high = n-1; 
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == pos){
            check = 1;
            break;
        }
        
        else if (arr[mid] < pos){
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
  }
    if(check){
        printf("%d is present at %d index \n" , pos,mid );
    }
    else{
        printf("%d is not present in the array \n" ,pos);
    }
}