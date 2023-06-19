#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("ENter a string : ");
    fgets(str,100,stdin);
    int len;

    //Lenghth of a string
    for(len = 0 ; str[len] != '\0' ; ++len);
    printf("Lentght of string is : %d\n",len);

    //Vowerls in the string
    printf("\n");
    int count;
    for(int i = 0; i <len ; i++){
        switch (str[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I': 
        case 'O': 
        case 'U': count ++;
        }
    }
    printf("Total number of vowels are : %d\n",count );
    
    //Palindrome or not
    printf("\n");
    char str0[100];
    printf("ENter a string : ");
    fgets(str0,100,stdin);
    int i , j , k;
    int flag = 1;
    for(k = 0 ; str0[k] != '\0' ; k++);
    for(i = 0 , j = k -2 ; i < k/2; i++,j--){
        if(str0[i] != str0[j]){
            flag = 0 ;
            break;
        }
    }
    if(flag){
        printf("It is a palindrome\n") ;
    }
    else{
        printf("It is not a palindrome\n");
    }
    

    //Concatenation
    printf("\n");
    char str2[100];
    printf("Enter another string(to be concatenated ) : ");
    fgets(str2,100,stdin);
    printf("Concatenated string is : %s ",strcat(str,str2));

    //Comparison
    printf("\n");
    char str4[100];
    char str5[100];
    printf("Enter Wa string(to be compared) : ");
    fgets(str4,100,stdin);
    printf("Enter another string(to be compared) : ");
    fgets(str5,100,stdin);
    int temp = 1;
    for(int i = 0, j = 0 ; i < strlen(str4) , j < strlen(str5); i++,j++){
        if(str4[i] != str5[j]){
            temp = 0;
            break;
        }
    }
    if(temp){
        printf("Both the strings are same\n");
    }
    else{
        printf("Strings are not same\n");
    }

    //Reverse
    printf("\n");
    char str6[80];
    printf("Enter a string to be reversed : ") ;
    fgets(str6,80,stdin);
    for(i = 0 ; str6[i]!='\0';i++);
    char rev[80];
    int o;
    for(j=i-1,o=0;j>=0;--j,++o){
        rev[o]=str6[j];
    }
    rev[o]='\0';
    printf("String in reverse order is : %s\n",rev );

    //Lower case to upper and upper to lower
    printf("\n");
    char str7[100];
    printf("Enter a string you want to  convert to lower and uppercase : \n");
    fgets(str7,100,stdin);
    for(int x = 0 ; x < i ; x++){
        if(islower(str7[x])){
            str7[x]=toupper(str7[x]);
        }
        else{
            str7[x]=tolower(str7[x]);
        }
    }
    printf("The string converted is : %s" , str7);
}