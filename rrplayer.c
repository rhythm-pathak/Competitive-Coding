#include<stdio.h>
int main()
{
    int n,t;
    double s=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(x=1;x<=n;x++)
            s=s+(1/(double)(n-i+1));
        printf("%d",s*n);
        s=0;
    }
}