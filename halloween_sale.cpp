#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p,d,m,s,x,cnt=0;
    cin>>p>>d>>m>>s;
    x=p;
    while(x<=s)
    {
        p = p-d;
        if(p>=m)
        {
            x = x+p;
        }
        else
        {
            p = m;
            x=x+p;
        }
        cnt++;
    }
    cout<<cnt;
    return 0;
}
