#include<stdio.h>
int k;
int f(int n,int k1,int a[][k])//returns no. of terms in the expansion of (a1+a1+...+ak)^n
{
    if(a[n-1][k1-1]==-1)
    {
        int sum=0;
        if(k1!=0)
        {
            for(int x=1;x<=n;x++)
            sum=sum+f(x,k1-1,a);
            sum++;
        }
        a[n-1][k1-1]=sum;
    }
    return a[n-1][k1-1];
}
int main()
{
    int t,n,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        if(n==k)
        {printf("1");continue;}
        int a[n-k][k];
        for(x=0;x<n-k;x++)
        for(y=0;y<k;y++)
        a[x][y]=-1;
        printf("%d",f(n-k,k,a));
    }
#include<stdio.h>
int k;
int f(int n,int k1,int a[][k])//returns no. of terms in the expansion of (a1+a1+...+ak)^n
{
    if(a[n-1][k1-1]==-1)
    {
        int sum=0;
        if(k1!=0)
        {
            for(int x=1;x<=n;x++)…        printf("%d",f(n-k,k,a));
    }
}