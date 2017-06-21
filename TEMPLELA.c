#include<stdio.h>
#include<math.h>
int main()
{
    int x,input,expected,n,test,flag=0;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        if(n%2==0)
            flag=1;

        for(x=1;x<=n;x++)
        {
            scanf("%d",&input);
            if(flag==1)
            continue;

            else
            {
                expected=(n+1)/2-abs(x-(n+1)/2);
                if(input!=expected)
                     flag=1;
            }
        }

        if(flag==0)
            printf("yes\n");
        else
            printf("no\n");
        flag=0;
    }
}