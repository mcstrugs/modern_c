#include <stdio.h>

int main()
{
    int n,sd;
    printf("Enter number of days in month: ");
    scanf("%d",&n);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d",&sd);
    int day = 2 - sd;
    int pos = 0;
    while (day <= n)
    {
        if (pos % 7 == 0 && pos > 0)
            printf("\n");

        if (day <= 0)
            printf("   ");
        else
            printf("%2d ", day);

        pos++;
        day++;
    }
    putchar('\n');
    return 0;
}
