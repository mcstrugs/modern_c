#include <stdio.h>

int main()
{
    float loan, rate, payment;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    rate = rate / 100.0f / 12.0f;
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    loan += loan*rate;
    loan -= payment;
    printf("Balance after first payment: $%.2f\n", loan);
    loan += loan*rate;
    loan -= payment;
    printf("Balance after second payment: $%.2f\n", loan);
    loan += loan*rate;
    loan -= payment;
    printf("Balance after third payment: $%.2f\n", loan);
    
    return 0;
}