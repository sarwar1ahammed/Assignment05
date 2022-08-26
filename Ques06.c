
#include <stdio.h>
int main()
{
    // print the first N even natural numbers

    int n, p=1;
    printf("Input number of terms : ");
    scanf("%d", &n);

    printf("The first N even natural numbers : \n");
    while (p<=n)
    {
        printf("%d\n", p*2);
        p++;
    }
    
    

    return 0;
}