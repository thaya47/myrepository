#include<stdio.h>
int main()
{
    int k;
    char s[90000];
    printf("enter the number and string:");
    scanf("%d",&k);
    scanf("%s",&s);
    for(int i=0;i<k;i++)
    {
        printf("%s\n",s);
    }
    getch();
}
