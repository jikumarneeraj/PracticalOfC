#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter tempreture in centigrade: ");
    scanf("%f",&c);
    f=((9*c)/5)+32;
    printf("Tempreture in fahrenhit is: %f",f);
}