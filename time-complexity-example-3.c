#include <stdio.h>

//使用迭代的方式进行二分查找
int binarySearch(int arr[],int left,int right,int x){

    while(left <= right){

        int mid = left + (right - left) / 2;

        //检查x是否在中点
        if(arr[mid] == x)
            return mid;
        //如果x大于中点，忽略左半部分
        if(arr[mid] < x)
            left = mid + 1;
        //如果x小于中点，忽略右半部分
        else   
            right = mid - 1;
    }
    //在数组中不存在x
    return -1 ;
}

int main(void){
    int arr[] = {2,3,4,10,40,55,77,88,99};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n-1, x);
    (result == -1) ? printf("数组中不存在该元素\n")
                   : printf("元素在数组中的索引为 %d \n",result);
    return 0;
}


/*
    时间复杂度  O(log n)
    Output     元素在数组中的索引为 3
*/