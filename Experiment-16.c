#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,x;
    printf("Enter number:");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("Number is Composite.");
            exit (0);
        }
        
    }
    printf("Number is Prime.");
}