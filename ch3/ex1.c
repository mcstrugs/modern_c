// Ex 1.
// write a program that accepts a date from the user in the form mm/dd/yyyy and then plays it in the form yyyymmdd:
#include <stdio.h>

int main()
{
    int mm,dd,yyyy;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);
    printf("You entered the date: %.4d%.2d%.2d\n",yyyy,mm,dd);

    return 0;

}
