#include<stdio.h>
int main()
{
   int i,j;
   int n=5;
   for(i=1;i<=n;i++)
      {
            for(j=n;j>=i;j--)
         {
            printf("%d",j);
         }
      printf("\n");
      }
   return 0;
}

