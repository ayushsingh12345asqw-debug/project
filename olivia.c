#include<stdio.h>
int main ()
{
    int n , a = 0, b = 1, nextterm;
    printf("enter the number of terms :");
    scanf("%d", &n);
    if(n <= 0)
    {
        printf("pleas enter a positive integer.\n");
        return 0;
    }
    printf("fibonacci series:");
    for(int i = 1; i <= n; ++i)
    { 
    printf("%d", a);
    nextterm = a + b;
    a = b;
    b = nextterm;
    }
    return 0;
}