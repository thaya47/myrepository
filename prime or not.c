#include<stdio.h>
#include<conio.h>
int main()
{
	
	int a,i,count=0;
	printf("Enter a number:");
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	getch();
}
