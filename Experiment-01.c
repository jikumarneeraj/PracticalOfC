#include<stdio.h>
int main()
{
    float hindi,english,math,physics,chemistry,marks,totalMarks,per;
    printf("Enter marks of hindi, English, Mathematics, Physics and Chemistry with space: ");
    scanf("%f %f %f %f %f",&hindi,&english,&math,&physics,&chemistry);
    marks=hindi+english+math+physics+chemistry;
    printf("Enter total marks:");
    scanf("%f",&totalMarks);
    per=(marks/totalMarks)*100;
    printf("total marks obtain is: %f",marks);
    printf("\nPercentage is :%f",per);
}