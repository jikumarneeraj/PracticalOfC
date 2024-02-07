#include<stdio.h>
int main()
{
    int e,i,t=0;
    printf("Enter no. of elements: ");
    scanf("%d",&e);
    int A[e];
    for(i=0;i<e;i++)
    {
        printf("Enter elements : ");
        scanf("%d",&A[e]);
    }
    for (i=0;i<=e;i++)
    {
        t=t+i;
    }
    printf("sum of all elements is = %d",t);
}