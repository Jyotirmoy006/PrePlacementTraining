//Check if string is palindrome
#include <stdio.h>
#include <string.h>

int main() {
    char str[100],temp[100];
    int i, len;
    char temp;

    // Input string
    printf("Enter a string: ");
    gets(str);  // Use fgets in modern code for safety
    strcpy(temp,str);

    len = strlen(str);

    // Swap characters from both ends
    for(i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    if (strcmp(temp,str)==0) printf("palindrome");
    else printf("not palindrome");

    return 0;
}
