#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);
    int r[100],y[100];
    r[0]=1,r[1]=3;r[2]=6;r[3]=15;
    y[0]=0,y[1]=0,y[2]=3,y[3]=6;
    if(n>4)
    {
        for(int x=4;x<n;x++)
        {
          y[x]=6*r[x-3]*3*y[x-3];
          r[x]=6*r[x-2]+3*y[x-2]+y[x-1];
        }
    }
    printf("%d\n",3*r[n-1]+y[n-1]);
	return 0;
}

