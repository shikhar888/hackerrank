#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,t,n,c,m,cnt,x;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>c>>m;
        cnt=n/c;
        if(cnt<m)
        {
            cout<<cnt<<endl;
        }
        else
        {
            x=cnt;
            while(cnt>=m)
            {
                x=x+(cnt/m);
                cnt = cnt - (m * (cnt/m)) + (cnt/m); 
            }
            cout<<x<<endl;
        }
    }
    return 0;
}
