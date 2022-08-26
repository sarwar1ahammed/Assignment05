#include <stdio.h>
int main()
{
    // print the first N odd natural numbers

    int n, p;
    printf("Input number of terms : ");
    scanf("%d", &n);

    printf("The first N odd natural numbers : \n");
    for (p=1; p<=n*2; p+=2)
    {
        printf("%d\n", p);
    }

    return 0;
}