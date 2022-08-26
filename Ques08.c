#include <stdio.h>
int main()
{
    // print squares of the first N natural numbers

    int n, p=1;
    printf("Input number of terms : ");
    scanf("%d", &n);

    printf("Squares of the first N natural numbers : \n");
    while (p<=n)
    {
        printf("%d\n", p*p);
        p++;
    }


    return 0;
}