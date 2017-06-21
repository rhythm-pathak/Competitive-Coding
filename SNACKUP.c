#include<stdio.h>
int main()
{
    int t,y,x,n,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",n);
        for(x=1;x<=n;x++)
        {
            printf("%d\n",n);
            c=x;
            for(y=1;y<n;y++)
            {
                printf("%d %d %d\n",y,c,c=(++c)%n);
            }
        }
    }
}