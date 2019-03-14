#include<stdio.h>
int main()
{
    int a,b,i,k=1;
    scanf("%d%d",&a,&b);
    for(i=0;i<b;i++)
    {
        k=k*a;
    }
    printf("%d",k);
}
