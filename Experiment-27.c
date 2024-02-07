#include<stdio.h>
int main()
{
    float Arr1[3][4],sum=0;
    printf("Enter elements : ");
    for (int i=0 ;i<3;i++)
    {
        for(int j=0 ;j<4;j++)
        {
            scanf("%f",&Arr1[i][j]);

        }
    }
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i==j){
            sum+=Arr1[i][j];
            }
        }
    }
    printf("sum of digonal matrix is = %f",sum);

    return 0;
}