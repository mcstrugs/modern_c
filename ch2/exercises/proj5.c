#include <stdio.h>

int main()
{
    float x;
    printf("Enter x: ");
    scanf("%f", &x);
    
    printf("%f\n", ((((3.0f*x + 2.0f)*x - 5.0f)*x - 1.0f)*x + 7.0f)*x - 6.0f);

    return 0;
}