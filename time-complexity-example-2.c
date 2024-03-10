#include <stdio.h>
#include <string.h>

void printFirstCharacter(char* str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    printf("%c",str[i-1]);
}

int main(){
    char str[] = "Liangyongqi";
    printFirstCharacter(str);
    return 0;
}