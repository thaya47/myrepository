#include<stdio.h>
main()
{
 int n,i;
 printf("enter the number:");
 scanf("%d",&n);
 while(n!=0)
  {
   n/=10;
   i++;
  }
 printf("%d",i);
 return 0;
  }
    
