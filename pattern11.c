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
            printf("%d",j);
         for(j1=i-1;j1>=1;j1--)
               printf("%d",j1);
printf("\n");
 }
for(i=n-1;i>=0;i--)
 {
   for(k=1;k<=(n-i);k++)
         printf(" ");
      for(j=1;j<=i;j++)
            printf("%d",j);
         for(j=i-1;j>=1;j--)
              printf("%d",j);
printf("\n");
 }
}



