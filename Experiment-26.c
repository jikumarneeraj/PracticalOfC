#include<stdio.h>
int main()
{
    float Arr1[3][3],Arr2[3][3],Arr3[3][3],Arr4[3][3];
    printf("Enter first array elements : ");
    for (int i=0 ;i<3;i++)
    {
        for(int j=0 ;j<3;j++)
        {
            scanf("%f",&Arr1[i][j]);

        }
    }
    printf("Enter second array elements : ");

    for (int i=0 ;i<3;i++)
    {
        for(int j=0 ;j<3;j++)
        {
            scanf("%f",&Arr2[i][j]);

        }
    }
    // For addition
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            Arr3[i][j]=Arr1[i][j]+Arr2[i][j];
        }
    }
    printf("\nSum of array elements is : ");

    for (int i=0 ;i<3;i++)
    {
        printf("\n");
        for(int j=0 ;j<3;j++)
        {
            printf("%f\t",Arr3[i][j]);

        }
        
    }
    // For Multiplication
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            Arr3[i][j]=0;
        }
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            for (int k=0;k<3;k++)
            {
                Arr4[i][j]+=(Arr1[i][k]*Arr2[k][j]);
            }
            
        }
    }
    printf("\nMultiplication of array elements is : ");

    for (int i=0 ;i<3;i++)
    {
        printf("\n");
        for(int j=0 ;j<3;j++)
        {
            printf("%f\t",Arr4[i][j]);

        }
        
    }
    return 0;
}