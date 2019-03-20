#include<stdio.h>
int main()
{
    int n,a[1000],i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<i+2;j++)
        {
            c=a[i]+a[j]+c;
        }
    }
    printf("%d",c);
}
