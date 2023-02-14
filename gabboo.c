#include <stdio.h>

int main()
{
   int c;


   printf("scrivi la temperatura in gradi celcius e io te la darò in fahrenheit e kelvin\n" );
   scanf("%i", &c);
   int f=9/5*c+32;
   int l=c+273.15;
  if (c>=-273.15){
  printf("in fahrenheit sono %i\n", f);
  printf("in kelvin sono %i\n", l);
}
    else {
        printf("errore, la temperatura è negativa\n");
    
}
}
