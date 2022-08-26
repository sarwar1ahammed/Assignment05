#include <stdio.h>
int main()
{
    // print a table of N.

    int n, p=1;
    printf("Input number of terms : ");
    scanf("%d", &n);

    printf("Squares of the first N natural numbers : \n");
    while (p<=10)
    {
        printf("%d\n", n*p);
        p++;
    }


    return 0;
}