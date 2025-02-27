//String Matching
//Brute Force Algorithm
#include <stdio.h>
#include <ctype.h>

int main()
{
    char input[999];
    int count[26] = {0}, i;
    
    scanf("%s", input);

    for(i=0; input[i] != '\0' ; i++){
        input[i] = tolower(input[i]);
        int n = input[i] - 'a';
        count[n] += 1;
    }

    for(i=0; i<26; i++){
        if(count[i] > 0){
            printf("%c : %d\n", i+'a', count[i]);
        }
    }
    return 0;
}