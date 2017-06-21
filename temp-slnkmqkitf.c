#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int t,m,n,x,y,n1,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&m,&n);
        n1=sqrt(n)+1;
        char* c1=(char*)calloc(n1,1);
        char* c2=(char*)calloc(n-m+1,1);

        for(x=2;x<n1;x++)
        {
            if(c1[x]!='1')
            {
                for(y=x*x;y<n1;y+=x)
                c1[y]='1';
                if(m%x!=0)
                p=(m/x+1)*x;
                else
                p=m;
                if(p==x)
                p=x*x;
                for(y=p;y<=n;y+=x)
                c2[y-m]='1';
            }
        }
        for(x=m;x<=n;x++)
        {
            if(c2[x-m]!='1'&&x!=1)
            printf("%d\n",x);
        }
        printf("\n");
        free(c1);
        free(c2);
    }
}