#include<stdio.h>
int main()
{
    int n,N,i,r,R=0;
    printf("Enter number:");
    scanf("%d",&n);
    N=n;
    while(n!=0){
        r=n%10;
        R=R*10+r;
        n=n/10;
    }
    printf("Reverse number is = %d",R);
}