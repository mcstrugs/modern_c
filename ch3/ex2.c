// Ex 2
// Write a program that formats product information entered by the user.
// A session with the user should look like this:
/*
 * Enter item number: 543
 * Enter unit price: 13.5
 * Enter purchase date (mm/dd/yyyy): 10/24/2010
 *
 * Item         Unit        Purchase
 *              Price       Date
 * 583          $ 13.50     10/24/2010
 */

#include <stdio.h>

int main()
{
    int unit_num, m,d,y;
    float unit_price;
    printf("Enter item number: ");
    scanf("%d",&unit_num);
    printf("Enter unit price: ");
    scanf("%f",&unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &d, &y);

    printf("Item        Unit        Purchase\n");
    printf("            Price       Date\n");
    printf("%3d         $ %4.2f      %.2d/%.2d/%.4d\n", unit_num, unit_price,m,d,y);

    return 0;
}
