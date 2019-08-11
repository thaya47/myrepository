 #include <stdio.h>

int main()
{
    int N,a;
    printf("enter the value of N");
    scanf("%d",&N);
    for(int i=1;i<=5;i++)
    {
        a=N*i;
        printf("N*i:%d\n",a);
    }

 getch();
}
