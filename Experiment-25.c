#include<stdio.h>
int main()
{
    int Arr[15]={1,3,5,73,3,6,3,1,0,3,6,9,2,54,3},temp,Arr1[15],max;
    // printf("Enter array elements: ");
    // for(int i=0;i<=15;i++)
    // {
    //     scanf("%d",&Arr[i]);
    // }
    max=Arr[0];
    for (int i =0 ; i<14;i++)
    {
        
        if (Arr[i]>=max)
        {
            // max=Arr[i];
            // temp=Arr[i];
            // Arr[i]=Arr[i+1];
            // Arr[i+1]=temp;
            Arr1[i]=max;
        }
        
        
    }
    for (int i=0;i<14;i++){
        printf("%d  ",Arr[i]);
    }
    

    return 0;
}