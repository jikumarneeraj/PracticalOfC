#include<stdio.h>
int main()
{
    float h,e,m,p,c,sum,percentage,total;
    printf("Enter Marks with space Hindi English Math Physics Chemistry:");
    scanf("%f%f%f%f%f",&h,&e,&m,&p,&c);
    printf("Enter total Marks:");
    scanf("%f",&total);
    sum=h+e+m+p+c;
    percentage=(sum/total)*100;
    if(percentage>=90 && percentage<=100)
    {
        printf("Your grade is A.");
    }
    else if (percentage>=80 && percentage<90)
    {
        printf("Your grade is B.");
    }
    else if (percentage>=60 && percentage<80)
    {
        printf("Your grade is C.");
    }
    else if (percentage<60)
    {
        printf("Your grade is D.");
    }
}