#include<stdio.h>
int main()
{
int i,j,k;
int n=5;
for(i=1;i<=n;i++)
 {
for(k=1;k<=(n-i);k++)
   printf(" ");
for(j=1;j<=i;j++)
   printf("*");
printf("\n");
 }
}
