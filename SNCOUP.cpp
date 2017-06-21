#include <iostream>
using namespace std;

int main() {
    int t,x,n,y,count,flag,count1,count2;
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
        int b[n]={0};
        for(x=0;x<n;)
        {
            y=x+1;
            if(a[1][x]=='*')
            {
                while(y<n&&a[1][y]!='*');
                if(y<n)
                b[y]=1;//means a barrier will be placed just before y
            }
            x=y;
        }
        for(x=0;x<n;x++)
        {
            y=x+1;
            if(a[0][x]=='*')
            {
                 while(y<n&&a[0][y]!='*');
                if(y<n)
                b[y]=1;
            }
            x=y;
        }
        for(x=0;x<n;x++)
        count2+=b[x];
	    count=count1>count2?count2:count1;
	    cout<<count<<endl;

	}
	return 0;
}
