#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], rev[100];
    int ch, i, len;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    printf("\n1.Length 2.Copy 3.Concat 4.Compare 5.Reverse\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    switch(ch) 
    {

        case 1:
            printf("Length = %lu", strlen(s1));
            break;

        case 2:
            strcpy(s2, s1);
            printf("Copied string = %s", s2);
            break;

        case 3:
            strcat(s1, s2);
            printf("Concatenated = %s", s1);
            break;

        case 4:
            if(strcmp(s1, s2) == 0)
                printf("Equal");
            else
                printf("Not Equal");
            break;

        case 5:
            len = strlen(s1);
            for(i=0; i<len; i++)
                rev[i] = s1[len-i-1];
            rev[len] = '\0';
            printf("Reverse = %s", rev);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}