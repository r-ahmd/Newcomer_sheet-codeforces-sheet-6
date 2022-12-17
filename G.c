#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 
int main() 
{
   long long int num;
   scanf("%lld", &num);
   long long int result = 0;
   for(int i=1; i<=sqrt(num); i++)
   {
      if(num % i == 0)
      {
         result += i;
         if(i != sqrt(num))
            result+=num/i;
      }
         
   }
   printf("%lld\n", result);
   
   
   return 0;
}
