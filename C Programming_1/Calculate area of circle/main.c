#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main()
{
    float radius;
    float area;
    printf("enter  the radius :");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("area of circle: %f\n", area);
    return 0;
}
