#include<stdio.h>
int main()
{
int i,j,k;
int n=5;
for(i=n;i>=0;i--)
 {
   for(k=1;k<=(n-i);k++)
         printf(" ");
      for(j=1;j<=i;j++)
            printf("*");
         for(j=2;j<=i;j++)
              printf("*");
printf("\n");
 }
}
