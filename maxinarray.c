#include<stdio.h>
#include<conio.h>
int main()
{
  int array[10], Size, i, Largest, Position;
  
  printf("\nPlease Enter the size of an array \n");
  scanf("%d",&Size);
  
  printf("\nPlease Enter %d elements of an array: \n", Size);
  for(i=0; i<Size; i++)
   {
     scanf("%d",&array[i]);
   }   
  
  Largest = array[0];
  for(i=1; i<Size; i++)
   {
    if(Largest<array[i])
     {
       Largest=array[i];
       Position = i;
     }   
   }
  
  printf("\nLargest element in an Array = %d", Largest);
  printf("\nIndex position of the Largest element = %d", Position);
  
  getch();
}
