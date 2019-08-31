#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,t,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int cnt=0;
        cin>>n>>k;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(j=0;j<n;j++)
        {
            if(a[j]<=0)
            {
                cnt++;
            }
        }
        if(cnt>=k)
        {
            cout<<"NO\n";
        }
        else
        { 
            cout<<"YES\n";
        }
    }
    return 0;
}
