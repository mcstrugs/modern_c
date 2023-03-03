#include <stdio.h>

int main()
{
    int hours, minutes;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);
    if (hours > 12)
    {
        printf("Equivalent 12-hour time: %d:%.2d PM",hours % 12, minutes);
    }
    else if (hours == 12)
    {
        printf("Equivalent 12-hour time: %d:%.2d PM", hours, minutes);
    }
    else if (hours < 12 && hours > 0)
    {

        printf("Equivalent 12-hour time: %d:%.2d AM",hours, minutes);
    }
    else if (hours == 0)
    {

        printf("Equivalent 12-hour time: 12:%.2d AM", minutes);
    }
    putchar('\n');

    return 0;
}
