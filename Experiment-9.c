#include<stdio.h>
int main()
{
    int y;
    printf("Enter year:");
    scanf("%d",&y);
    if (y%4==0||y%100==0)
    {
        printf("Entered year is Leap Year.");
    }
}