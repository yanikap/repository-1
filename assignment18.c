#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], rev[100];
    int i, len;

    printf("Enter string: ");
    scanf("%s", s1);

    // 1. Length
    len = strlen(s1);
    printf("Length = %d\n", len);

    // 2. Reverse (manual, no strrev)
    for(i = 0; i < len; i++)
        rev[i] = s1[len - i - 1];
    rev[len] = '\0';

    printf("Reverse = %s\n", rev);

    // 3. Equality
    printf("Enter another string: ");
    scanf("%s", s2);

    if(strcmp(s1, s2) == 0)
        printf("Equal\n");
    else
        printf("Not Equal\n");

    // 4. Palindrome
    if(strcmp(s1, rev) == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    // 5. Substring
    if(strstr(s1, s2) != NULL)
        printf("Substring Found\n");
    else
        printf("Substring Not Found\n");

    return 0;
}