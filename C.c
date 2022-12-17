#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
long long int sumOdd(long long int num)
{
   long long int result = (num+1) / 2;
   long long int fresult = result * result;
   return fresult;
}
long long int sumEven(long long int num)
{
   long long int result = (num*(num+1));
   return result;
}
 
int main() 
{
   int num1, num2;
   scanf("%d%d", &num1, &num2);
   int S, E;
   if(num1 >= num2)
   {
      S = num2;
      E = num1;
   }
   else
   {
      S = num1;
      E = num2;
   }
   long long int evenResult = sumEven(E/2) - sumEven((S-1)/2);
   long long int oddResult = sumOdd(E) - sumOdd(S-1);
   printf("%lld\n", evenResult+oddResult);
   printf("%lld\n", evenResult);
   printf("%lld\n", oddResult);
   
   
   
   return 0;
}
