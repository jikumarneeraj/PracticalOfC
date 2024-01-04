#include<stdio.h>
int main()
{
    float n1,n2,n3;
    printf("Enter numbers with space:");
    scanf("%f %f %f",&n1,&n2,&n3);
    if(n1>n2)
    {
        if(n1>n3)
        {
            printf("%f is greatest one.",n1);
        }
        else
        {
            printf("%f is greatest one.",n3);
        }
    }
    else
    {
        if(n2>n3)
        {
            printf("%f is greatest one.",n2);
        }
        else
        {
            printf("%f is greatest one.",n3);
        }
    }
}