#include <stdio.h>

int main()
{
    float price;
    printf("Enter the price: ");
    scanf("%f", &price);
    printf("With tax added: $%.2f\n", price*1.05f);

    return 0;
}