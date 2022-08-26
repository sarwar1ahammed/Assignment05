
#include <stdio.h>
int main()
{
    // print the first N odd natural numbers in reverse order.

    int n;
    printf("Input number of terms : ");
    scanf("%d", &n);

    printf("The first N odd natural numbers in reverse order : \n");
    while (n >= 1)
    {
        printf("%d\n", 2*n-1);
        n--;
    }

    return 0;
}