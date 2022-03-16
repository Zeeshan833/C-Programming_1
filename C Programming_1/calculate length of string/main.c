#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[500];
    int length;
    printf("enter the str to calculate its length:");
    gets(str);
    length = strlen(str);
    printf("length of the name: %d\n", length);
    return 0;
}
