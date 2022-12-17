#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 
int main() 
{
   long long int num;
   scanf("%lld", &num);
   for(long long int i=1;;i++)
   {
      if(i>num)
      {
         printf("%lld\n", (i-1));
         return 0;
      }
      else
         num -= i;
   }
   
   
   return 0;
}
