// ex4

#include <stdio.h>

int main()
{
    int d1, d2, d3;
    printf("Enter phone number [ (xxx) xxx-xxxx ]: ");
    scanf("(%d) %d-%d", &d1, &d2, &d3);
    printf("You entered %.3d.%.3d.%.4d\n", d1, d2, d3);

    return 0;
}
