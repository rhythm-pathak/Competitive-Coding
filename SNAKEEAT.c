#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}

int main()
{
    int n,m,x,target,left,right,count,test,prevTarget,prevCount1;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d",&n,&m);
        int a[n];
        for(x=0;x<n;x++)
            scanf("%d",&a[x]);
         qsort(a,n,sizeof(int),cmpfunc);
         prevTarget=a[0]+n-1;
         prevCount1=0;
        while(m--)
        {
            scanf("%d",&target);//target
            if(target<prevTarget)
            count=prevCount1;
            else prevCount1=count=0;
            for(x=count;x<n&&a[x]>=target;x++,count++);//finds the number of elements>=target
            prevCount1=count;
            left=x;
            right=n-1;
            while(right-left+a[left]>=target)
            {
                count++;
                right-=target-a[left++];
            }
            printf("%d\n",count);
            prevTarget=target;
        }
    }
}
