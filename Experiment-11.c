#include<stdio.h>
int main()
{
    int n1,n2,ans;
    printf("Enter n1 & n2 with space:");
    scanf("%d%d",&n1,&n2);
    printf("Add:1\nSub:2,\nMulti:3\nDivi:4\n");
    int opr;
    printf("Enter operater:");
    scanf("%d",&opr);
    switch (opr)
    {
    case 1:
        printf("Addition of %d ans %d is = %d",n1,n2,(n1+n2));
        break;
    case 2:
        printf("Subtraction of %d ans %d is = %d",n1,n2,(n1-n2));
        break;
    case 3:
        printf("Multiplication of %d ans %d is = %d",n1,n2,(n1*n2));
        break;
    case 4:
        if(n2!=0)
        {
            printf("Division of %d ans %d is = %d",n1,n2,(n1/n2));
        break;
        }
        else printf("Enter n2 is Zero.");
    default:
        printf("Invaldid opretor");
        break;
    }
    return 0;
}