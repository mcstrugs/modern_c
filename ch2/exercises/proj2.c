#include <stdio.h>

#define PI 3.14159f

int main() 
{
    float r = 10.0f;
    printf("Volume of sphere with radius %.2f: %.2f\n", r, 4.0f/3.0f*PI*r*r*r);
    return 0;
}