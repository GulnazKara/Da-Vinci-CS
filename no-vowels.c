// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* replace (char* str){
    char* result = malloc(strlen(str) +1);
    int i;
    for (i=0; i<strlen(str); i++) {
        switch (str[i]) {
            case 'a':
            result[i]='6';
            break;
            case 'e':
            result[i]='3';
            break;
            case 'i':
            result[i]='1';
            break;
            case 'o':
            result[i]='0';
            break;
            case 'u':
            result[i]='u';
            break;
            default:
            result[i]=str[i];
            break;
        }
    }
    result[i]='\0';
    return result;
}
// Main function
int main (int argc, char* argv[]){
    if (argc !=2) {
        printf("error: please provide one word as input.\n");
        return 1;
    }
    char* converted = replace(argv[1]);
    printf("%s\n", converted);
    free(converted);
    return 0;
    
}
