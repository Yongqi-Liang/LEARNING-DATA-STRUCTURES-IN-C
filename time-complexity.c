#include <stdio.h>
#include <string.h>

void printFirstCharacter(char* str){
    printf("%c",str[0]);
}

int main(){
    char str[] = "Liangyongqi";
    printFirstCharacter(str);
    return 0;
}


/*
    时间复杂度  O(1)
    Output      L
*/