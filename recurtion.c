#include<stdio.h>
int main(){
   int result = fact(5);
   printf("The result is: %d\n", result);
   
    return 0;
}

int fact(int i){
        if(i==1){
            return 1;
        }else{
           return i*fact(i-1);
        }
}