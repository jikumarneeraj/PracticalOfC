#include<stdio.h>
int main()
{
    int e,i,t=0;
    printf("Enter no. of elements : ");
    scanf("%d",&e);
    int A[e],B[e],C[e];
    for(i=0;i<e;i++)
    {
        printf("Enter first array elements : ");
        scanf("%d",&A[i]);
    }
    for(i=0;i<e;i++)
    {
        printf("Enter second array elements : ");
        scanf("%d",&B[i]);
    }
    printf("Entered array sum is : ");
    for(i=0;i<e;i++)
    {
        C[i]=(A[i]+B[i]);
        printf("%d,",C[i]);
    }
    // printf("%d,",A[i]);
}