#include <stdio.h>
#include <stdlib.h>

int binary_search(int find, int arr[], int n){
    int left =0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = (left+right)/2;
        if (arr[mid] == find )
            return mid;
        if (arr[mid] < find)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main(){

    //amount
    int n;
    printf("Input amount of number : ");
    scanf("%d",&n);

    //add number
    int *arr = (int *)malloc(n * sizeof(int));
    printf("\nInput number : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //input scan
    int find;
    printf("\nFind :");
    scanf("%d",&find);
    
    //function
    int output = binary_search(find, arr, n);
    
    //print result
    if (output != -1)
        printf("\nValue %d found at %d index", find, output );
    else
        printf("\nValue not found ");
    return 0;
}