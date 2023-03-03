#include <stdio.h>

int main()
{
    float num = 1.0f;
    float largest = -10000000.0f;
    while (num > 0.0f)
    {
        printf("Enter a number: ");
        scanf("%f", &num);
        if (num > largest) largest = num;
    }
    printf("The largest number entered was %f\n",largest);
    return 0;
}
