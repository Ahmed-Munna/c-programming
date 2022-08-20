#include<stdio.h>
int main(){

// =========== Problem solving form book ============

// 1st

    /*int array[] = {1,2,3,4,5,6,7,8,9,0};
    int i,j;
    for(i=0; i<10; i++){
        j = array[i]%2; 
        if(j == 0){
            printf("%d\n",array[i]);
        }
    }
    for(i=0; i<10; i++){
        j = array[i]%2;  
        if(j == 1){
            printf("%d\n",array[i]);
        }
    }*/

//2nd

const char password[] = "Bangladesh";
char input[];

printf("Enter password\n");
scanf("%s", input);
(password == input)?printf("Login successfull\n") : printf("Invalid password\n");



    return 0;
}