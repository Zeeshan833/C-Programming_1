#include <stdio.h>
#include <stdlib.h>

int main()
{

    int area;
    int side;

    printf("enter the length side:");
    scanf("%d", &side);
    area = side * side;
    printf("area of square: %d\n", area);
    return 0;
}
