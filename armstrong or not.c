#include <stdio.h>
#include<conio.h>
int main()
{
    int a, originalNumber, remainder, result = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &a);
    originalNumber = a;
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }
    if(result == a)
        printf("yes");
    else
        printf("no");
    getch();
}
