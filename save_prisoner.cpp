#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cnt,n,m,s,t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>m>>s;
        cnt=(m%n)-(0-(s-1));
        if(cnt==0)
        {
            cout<<n<<"\n";
        }
        else if(cnt%n==0)
        {
            cout<<cnt<<"\n";
        }
        else
        {
            cout<<(cnt%n)<<"\n";
        }
    }
    return 0;
}
