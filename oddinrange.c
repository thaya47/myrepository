#include <stdio.h>

int main()

{

    int num,m,n;
  printf("enter the value of intervals");
  scanf("%d%d",&m,&n);

    printf("Print Odd Numbers in a given range m to n:\n");

for (num = m; num <= n; num++)

        {

               if (num % 2 == 1)

                  printf ("%d ", num);

         }

                getch();

}
