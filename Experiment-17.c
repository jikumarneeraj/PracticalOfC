#include<stdio.h>
int main()
{
    int n,N,r,sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    N=n;
    for(int i=0;i<=N;i++)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    printf("Sum of digits is : %d",sum);
}