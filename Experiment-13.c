#include<stdio.h>
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("Factorial of %d is = %d",n,f);
}