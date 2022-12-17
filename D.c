#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 
int main() 
{
   long long int a, b, q;
   scanf("%lld%lld%lld", &a, &b, &q);
   long long int result = q % 3;
   if(result == 1)
   {
      printf("%lld\n", a);
   }
   else if(result == 2)
   {
      printf("%lld\n", b);
   }
   else
   {
      printf("%lld\n", a^b);
   }
   
   
   
   return 0;
}
