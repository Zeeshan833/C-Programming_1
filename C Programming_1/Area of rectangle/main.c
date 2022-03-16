#include <stdio.h>
#include <stdlib.h>

int main()
{
     int length;
     int width;
     int area;
    printf("enter the length:");
    scanf("%d", &length);

    printf("enter the width:");
    scanf("%d", &width);
    area = length * width;
    printf("area of rectangle: %d\n", area);
    return 0;
}
