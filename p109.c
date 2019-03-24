#include<stdio.h>

int main() {
   int i,a[100],n,k=0,j;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=n-1;i>=0;i--)
   {
        for(j=i-1;j>=0;j--)
        {
         a[i]=a[i]+a[j];
        }
       printf("%d ",a[i]);
   }
}
