#include<stdio.h>
int main(){
    int A[20],i,max=0,min=99999;
    printf("Enter elements of Array: ");
    for(i=0;i<20;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<20;i++){
        if(A[i]>max){
            max=A[i];
        }
        if (A[i] < min){
            min=A[i];
        }
    }
    printf("%d is the greatest number.\n",max);
    printf("%d is the smallest number.",min);
}