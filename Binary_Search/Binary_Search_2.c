#include <stdio.h>
#include <string.h>

int find_peak(char *str) {
    int left = 0, right = strlen(str) - 1;
    
    //01234
    //12345
    while (left < right) {
        int mid = left + (right - left) / 2;

        if (str[mid] > str[mid + 1]) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left + 1;
}

int main() {
    char str[100];
    printf("input: ");
    scanf("%s", str);

    printf("%d\n", find_peak(str));

    return 0;
}