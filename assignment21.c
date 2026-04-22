#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *source, *destination;
    char ch;
    source = fopen("source.txt", "r");
    if (source == NULL)
    {
    printf("file not found");
    exit(1);
    }
    destination = fopen("destination.txt","w");
    if (destination == NULL)
    {
    printf("file not open");
    exit(1);
    }
    while ((ch = fgetc(source)) != EOF)
    {        fputc(ch, destination);
    }
    printf("file copied successfully");
    return 0;
}