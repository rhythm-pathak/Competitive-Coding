#include <iostream>
using namespace std;

int main() {
    int t,x,n,y,count,flag;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    char a[2][n];
	    count=flag=0;
        count1=2*n+1;
	    for(x=0;x<2;x++)
	    for(y=0;y<n;y++)
	        cin>>a[x][y];
	   for(x=0;x<n;x++)
	    {
	        if(a[0][x]=='*'&&a[1][x]=='*')
	        {flag=1;break;}
	    }
        if(flag==0)//no middle barrier
        {
            for(x=0;x<n;x++)
            {
                if(a[0][x]=='*')
                    count1++;
                if(a[1][x]=='*')
                    count1++;
            }
        }
        count1--;
	    //now consider middle barrier
        count2=1;
        int q,w;
        q=w=0;
       for(x=0;x<n;x++)
       {
           if(a[1][x]=='*')
           q++;
           if(a[0][x]=='*')
           w++;
       }
       count2=q>w?q:w;
       count2--;
       count=count1>count2?count2:count1;

	    cout<<count<<endl;

	}
	return 0;
}
