#include<stdio.h>
int main()
{
    int a[1000],n,i,j,t=0,k=0,m=0,b[1000],min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            t=a[i]-a[j];
            b[k]=t;
            k++;
            m++;
        }
    }
    min=b[0];
    for(k=1;k<m;k++)
    {
        if(min<b[k])
        {
            min=b[k];
        }
    }
    printf("%d",min);
}
