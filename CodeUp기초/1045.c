#include <stdio.h>

int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", a+b);
    printf("%lld\n", a-b);
    printf("%lld\n", a*b);
    printf("%lld\n", a/b);
    printf("%lld\n", a%b);
    printf("%.02f", (float)a/(float)b);
    return 0;
}