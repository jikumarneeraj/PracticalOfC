#include<stdio.h>
int main()
{
    int n;
    int q=0,a;
    printf("Enter number:");
    scanf("%d",&n);
    int N=n;
    while (n>0)
    {
        a=n%10;
        q=q+a;
        n=n/10;
    }
    printf("Sum of %d is =%d",N,q);
}