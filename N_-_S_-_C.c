#include<stdio.h>
int main()
{
    int n,m,c,i,d;
    scanf("%d%d",&n,&m);
    for(i=n+1;i<m;i++)
    {
        c=i*i;
        d=i*i*i;
        printf("%d ",i);
        printf("%d ",c);
        printf("%d
",d);
    }
}