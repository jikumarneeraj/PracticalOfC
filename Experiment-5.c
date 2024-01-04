#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter your first and second variable value with space.");
    scanf("%f %f",&a,&b);
    float c;
    c=b;
    b=a;
    a=c;
    printf("your first variable is:%f and sencond variable is:%f",a,b);
    return 0;
}