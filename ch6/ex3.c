#include <stdio.h>

int gcd(int m,int n)
{
    int r;
    while (n > 0)
    {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}

int main()
{
    int n,d;
    printf("Enter a fraction: ");
    scanf("%d/%d", &n, &d);
    int g = gcd(n,d);
    n = n / g;
    d = d / g;
    printf("In lowest terms: %d/%d\n", n,d);
    return 0;
}
