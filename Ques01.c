#include <stdio.h>
int main()
{
    // print MySirG N times on the screen

    int n, p=1;
    printf("Enter nth time to print this statement : ");
    scanf("%d", &n);
    while(p <= n)
    {
        printf("MySirG\n");
        p++;
    }
    return 0;
}