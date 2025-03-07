#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binarySearch(int array[], int target, int length, int *count){
    *count=0;
    int low = 0;
    int high = length-1;
    while (low <= high)
    {
        int middle = low + (high - low)/2;
        int value = array[middle];

        printf("middle: %d\n",value);

        (*count)++;
        if (value < target){
            low = middle +1;
        }else if (value > target)
        {
            high = middle - 1;
        }else{
            return middle;
        }
    }
    
    return -1;
}

int main(){

    int array[5000];
    int length = sizeof(array) / sizeof(array[0]);
    int target = 500;
    int count;
    //เติม array
    for (int i = 0; i < length; i++)
    {
        array[i] = i;
    }
    
    int index = binarySearch(array, target, length, &count);

    printf("Count: %d\n",count);
    if(index == -1){
        printf("Target not found");
    }else{
        printf("Target found at: %d",index);
    }
    return 0;
}