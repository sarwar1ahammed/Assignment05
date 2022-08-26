
#include <stdio.h>
int main()
{
    // first N even natural numbers in reverse order

    int n;
    printf("Input number of terms : ");
    scanf("%d", &n);

    printf("The first N even natural numbers in reverse order : \n");
    while (n>=1)
    {
        printf("%d\n", n*2);
        n--;
    }
    
    

    return 0;
}