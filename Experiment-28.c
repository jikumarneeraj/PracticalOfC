#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50],str3[50];
    int i;
    printf("Enter first string : ");
    gets(str1);
    printf("Enter second string : ");
    gets(str2);
    printf("String 1 length is =%d and string 2 length is =%d.\n",strlen(str1),strlen(str2));
    printf("%s",strcat(str1,str2));
    printf("%s",strcpy(str1,str2));
    printf("%s",strcmp(str1,str2));

}
