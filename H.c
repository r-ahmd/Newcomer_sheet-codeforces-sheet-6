#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
long long int GCD(long long int num1, long long int num2)
{
   while(num2 != 0)
   {
      long long int temp = num1;
      num1 = num2;
      num2 = temp % num1;
   }
   return num1;
}
long long int LCM(long long int num1, long long int num2)
{
   return(num1 / GCD(num1,num2)) * num2;
}
 
int main() 
{
   long long int num1, num2;
   scanf("%lld%lld", &num1, &num2);
   printf("%lld %lld\n", GCD(num1,num2), LCM(num1, num2));
   
   
   
   return 0;
}
