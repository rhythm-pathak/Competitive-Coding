#include<stdio.h>
int main()
{
    int a,t,no=0,ne=0,x,n;
    char s[6];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%s",&n,s);
        for(x=0;x<n;x++)
        {
            scanf("%d",&a);
            if(a%2==0)
            ne++;
            else
            no++;
        }
        if(no>ne)
        printf("Chefu");
        else if(ne>no)
        printf("Chef");
        else
        printf(s);
        printf("\n");
        no=ne=0;
    }
}