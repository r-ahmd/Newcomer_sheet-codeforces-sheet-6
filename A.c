#include <stdio.h>
#include <math.h>
 
 
int main() 
{
   long long int num;
   scanf("%lld", &num);
   double res= log2(num)/log2(2);
   if((res-(int)res) != 0)
   {
      printf("NO\n");
   }
   else
   {
      printf("YES\n");
   }
   
   
   return 0;
}
