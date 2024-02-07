#include<stdio.h>
#include<math.h>
int main()
{
    int n,N,count,r,sum=0;
    printf("Armstrong numbers from 1 to 100 are:\n");
    for(n=1;n<=100;n++)
    {
        count=0;
        N=n;
        while (n!=0)
        {
            count+=1;
            n/=10;
        }
        n=N;
        while (n!=0)
        {
            r=n%10;
            sum+=pow(r,count);
            n/=10;
        }
        if(N==sum)
            printf("%d ,",sum);
        sum=0;
        n=N;
    }
}