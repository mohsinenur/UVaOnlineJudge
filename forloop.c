#include<stdio.h>
int main()
{
    int i,n,r,ansN=1,ansD=1,ansR=1,ans,d;
int main()scanf("%d%d",&n,&r);
    for(i=1;i<=n;i=i+1)
    {
        ansN=ansN*i;
    }
    for(i=1;i<=r;i=i+1)
    {
        ansR=ansR*i;
    }
    d=n-r;
    for(i=1;i<=d;i=i+1)
    {
        ansD=ansD*i;
    }
    ans=ansN/(ansR*ansD);
    printf("%d",ans);
     return 0;
}
