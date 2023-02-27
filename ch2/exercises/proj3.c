#include <stdio.h>

#define PI 3.14159f

int main()
{
    float r;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &r);
    printf("Volume of sphere with radius %.2f: %.2f\n", r, 4.0f/3.0f*PI*r*r*r);
    return 0;
}
