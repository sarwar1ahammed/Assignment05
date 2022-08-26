

#include <stdio.h>
int main()
{
    // print the first N natural numbers in reverse order

    int n;
    printf("Enter the first N natural numbers in reverse order : ");
    scanf("%d", &n);
    while(n >= 1)
    {
        printf("%d\n", n);
        n--;
    }
    return 0;
}