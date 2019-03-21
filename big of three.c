#include <stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter the value");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is grater:",a);
    }
    else if(b>c)
    {
        printf("b is grater:",b);
    }
    else
    {
        printf("c is grater:",c);
    }
}
