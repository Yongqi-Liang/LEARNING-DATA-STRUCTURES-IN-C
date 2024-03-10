#include <stdio.h>

int main(){
    int n = 100;
    int x = 1;
    
    while(x < n){
        printf("%d \n",x);
        x = x * 3;
    }
    return 0;
}


/*
    时间复杂度  O(log n)    log 3(底) n
    Output      1
                3
                9
                27
                81   
*/