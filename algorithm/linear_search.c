#include <stdio.h>
#include <stdlib.h>

int linearSearch(int array[],int length, int vaule){
    
    for(int i = 0 ; i < length ; i++ ){
        if (array[i] == vaule){
            return i;
        }
    }

    return -1;
}

int main(){

    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int length = sizeof(array) / sizeof(array[0]);
    int index = linearSearch(array, length, 1);

    if(index != -1){
        printf("Element found at index: %d", index);
    }else{
        printf("Element not found");
    }

    return 0;
}