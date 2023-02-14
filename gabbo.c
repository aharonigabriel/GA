#include <stdio.h>

int main()
{
   int x;
   int y;

   printf("che numero hai? \n" );
   scanf("%i", &x);
   printf("che altro numero hai?");
   scanf("%i", &y);
  if (x%y==0)
{
    printf("i numeri sono multipli\n");
}
else
printf("i numeri non sono multipli\n");
}
