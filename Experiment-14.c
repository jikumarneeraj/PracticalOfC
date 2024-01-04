#include<stdio.h>
int main()
{
    int n;
    int e=0;
    int o=0;
    printf("Enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            e=e+i;
        }
        else
        {
            o=o+i;
        }
    }
    printf("Sum of Even number upto %d is = %d\nsum of Odd number upto %d is = %d",n,e,n,o);
}