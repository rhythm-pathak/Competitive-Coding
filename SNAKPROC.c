#include<stdio.h>
int main()
{
    int test,n,flag=0,count=0,x;
    char c;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        for(x=1;x<=n+1;x++)
        {
            scanf("%c",&c);
            if(flag==0)
            {
                if(c=='H')
                count++;
                if(c=='T')
                count--;
                if(count<0||count>1)
                flag=1;
            }
        }
        if(flag==0&&count==0)
             printf("Valid\n");
         else
             printf("Invalid\n");
         count=flag=0;
    }
}