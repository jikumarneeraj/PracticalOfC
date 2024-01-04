#include<stdio.h>
int main()
{
    float n1,n2,n3;
    printf("Enter three number with space.");
    scanf("%f%f%f",&n1,&n2,&n3);
    if (n1>n2)
    {
        if (n2>n3)
        {
            printf("%fis greater then among three.",n1);
        }
    }
    else if (n2>n1)
    {
       if (n1>n3)
       {
       printf("%fis greater then among three.",n2);
       }
       else
       {
        printf("%fis greater then among three.",n2);
       }
    }
    else
    {
        printf("%fis greater then among three.",n3);
    }
    
}