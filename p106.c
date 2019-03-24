#include<stdio.h>
int main()
{
    int n,i,a[1000],j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n!=1)
    {
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
               printf("%d ",a[i]);
               break;
            }
        }
    }
    }
    else
    printf("%d",a[0]);
}
