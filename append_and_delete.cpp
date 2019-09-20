#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,cnt=0,i;
    char s[100],t[100];
    cin>>s;
    cin>>t;
    cin>>k;
if( (strlen(s)+strlen(t)) <= k )
    {
        cout<<"Yes";
    }
else
{
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==t[i])
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    int x = ( strlen(s) - cnt ) + ( strlen(t) - cnt );
    if(k==x)
    {
        cout<<"Yes";
    }
    else if(k>x && (k-x)%2==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}
    return 0;
}
