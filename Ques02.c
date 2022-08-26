
#include <stdio.h>
int main()
{
    // print the first N natural numbers.

    int n, p=1;
    printf("Enter the first N natural numbers : ");
    scanf("%d", &n);
    while(p <= n)
    {
        printf("%d\n", p);
        p++;
    }
    return 0;
}