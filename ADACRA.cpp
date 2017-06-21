#include <iostream>

using namespace std;
int main()
{
    int t,n,x,u=0,d=0;
    string s;
    char c1,c2;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=s.length();
        c1=s[0];
        for(x=1;x<n;x++)
        {
            c2=s[x];
            if(c2=='U'&&c1=='D')
            u++;
            else if(c2=='D'&&c1=='U')
            d++;
            c1=c2;
        }
        if(u>=d)
        cout<<d<<endl;
        else
        cout<<u<<endl;
    }
}