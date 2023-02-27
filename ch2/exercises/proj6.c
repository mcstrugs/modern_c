#include <stdio.h>

int main()
{
    int dollars;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);
    int twenties = dollars / 20;
    dollars = dollars - 20*twenties;
    int tens = dollars / 10;
    dollars = dollars - 10*tens;
    int fives = dollars / 5;
    dollars = dollars - 5*fives;

    printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", twenties, tens, fives, dollars);
    
    return 0;
}