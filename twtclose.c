#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main()
{
    int n,k,co=0;
    char s[10];int c;
    scanf("%d%d",&n,&k);
    bool* a=calloc(n,1);
    while(k--)
    {
        scanf("%s",s);
        if(s[2]=='O')
        { a=calloc(n,1);co=0;}
        else
        {scanf("%d",&c);a[c-1]=!a[c-1];co=co+(a[c-1]?1:-1);}
        printf("%d\n",co);
    }
    free(a);
}