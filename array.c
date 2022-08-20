#include <stdio.h>
int main(){
    // =========== How to write string by c programming language ==========
    // char str[] = "Bangladesh";
    // printf("%s\n",str);
    // char string[] = {'B','a','n','g','l','a','d','e','s','h','\0'};
    // printf("%s\n",string);
    // printf("%c\n",string[0]);

    // =================== Memory Address ==================

        // char text[] = "Write some text";
        // printf("%p\n",text);

    int number[] = {25,49,10,39};
    number[2] = 90;
    int i;
    printf("%d\n",number[0]);
    for(i=1;i<4;i++){
        printf("%d\n",number[i]);
    }




    return 0;
}