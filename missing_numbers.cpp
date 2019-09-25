#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,a[100000];
    for(i=0;i<100000;i++)
    {
        a[i]=0;
    }
    cin>>n;
    for(i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a[k]--;
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        int l;
        cin>>l;
        a[l]++;
    }
    for(i=0;i<100000;i++)
    {
        if(a[i]!=0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
