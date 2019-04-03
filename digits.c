#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number");
    scanf("%d",&num);
    while(num!=0)
    {
        num/=10;
        i++;
    }
    printf("%d",i);
    return 0;
    }
    
