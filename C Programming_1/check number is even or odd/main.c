#include <stdio.h>
#include <stdlib.h>

int main()

{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    // True if remainder is 0
    if( number%2 == 0 )
        printf("%d is an even number.",number);
    else
        printf("%d is an odd number.",number);
    return 0;

}
