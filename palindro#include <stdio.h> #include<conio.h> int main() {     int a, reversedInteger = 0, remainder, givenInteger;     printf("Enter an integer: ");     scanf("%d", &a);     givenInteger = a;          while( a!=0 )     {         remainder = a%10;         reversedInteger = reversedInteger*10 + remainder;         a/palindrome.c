#include <stdio.h>
#include<conio.h>
int main()
{
    int a, reversedInteger = 0, remainder, givenInteger;
    printf("Enter an integer: ");
    scanf("%d", &a);
    givenInteger = a;
    
    while( a!=0 )
    {
        remainder = a%10;
        reversedInteger = reversedInteger*10 + remainder;
        a /= 10;
    }
        if (givenInteger == reversedInteger)
        printf("yes");
    else
        printf("no");
    
    getch();
}
