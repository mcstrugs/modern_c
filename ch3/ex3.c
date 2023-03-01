// ex 3

#include <stdio.h>

int main()
{
    int gs1, g_ident, pub_code, item_num, check_digit;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &g_ident, &pub_code, &item_num, &check_digit);
    printf("GS1 prefix: %d\nGroup identifier: %d\n,Publisher code: %d\nItem number: %d\nCheck digit: %d\n", gs1, g_ident, pub_code, item_num, check_digit);

    return 0;
}
