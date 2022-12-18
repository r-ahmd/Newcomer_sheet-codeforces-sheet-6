#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 
long long int sum(long long int num)
{
   return num *(num+1) / 2;
}
 
int main() 
{
   long long int num1, num2,x;
   scanf("%lld%lld%lld", &num1, &num2, &x);
   long long int max = (num1 > num2) ? num1 : num2;
   long long int min = (num1 > num2) ? num2 : num1;
   long long int result = (sum(max/x)*x)-(sum((min-1)/x)*x);
   printf("%lld\n", result);
   
   
   return 0;
}
