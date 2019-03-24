#include<stdio.h>
int main() {
   int i,a[100],n,k=0,j;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       if(i!=0)
       {
           for(j=i-1;j<i;j++)
           {
               a[i]=a[i]+a[j];
           }
       }
       printf("%d ",a[i]);
   }
}
