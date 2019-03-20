#include<stdio.h>
int main()
{
    int n,a[1000],i,j,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        c=a[i]+c;
    }
    printf("%d",c);
}
