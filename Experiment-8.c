#include<stdio.h>
int main()
{
    int n;
    printf("Enter numbers.");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Entered Number is Even.");
    }
    else
    {
        printf("Entered Number is Odd.");
    }
}