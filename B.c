#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 
int main() 
{
   long long int n;
   int flag=1;
   scanf("%lld",&n);
   if(n==0 || n==1)
      flag=0;
   for(int i=2;i<=sqrt(n);i++)
      if(n%i==0)
      {
         flag=0;
         break;
      }
   if(flag==1)
      printf("YES\n");
   else
      printf("NO\n");
   
   return 0;
}
