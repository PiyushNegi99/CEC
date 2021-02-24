#include<stdio.h>
int main()
{
int i,j,j1,k;
int n=5;
for(i=1;i<=n;i++)
 {
   for(k=1;k<=(n-i);k++)
         printf(" ");
      for(j=1;j<=i;j++)
            printf("*");
         for(j1=1;j1<=i-1;j1++)
               printf("*");
printf("\n");
 }
for(i=n-1;i>=0;i--)
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


