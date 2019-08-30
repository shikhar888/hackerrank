#include <bits/stdc++.h>

using namespace std;


int main()
{
    int j,i,n,k,cnt=0;
    cin>>n;
    cin>>k;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n-1;j++)
        {
            if((ar[i]+ar[j+1])%k==0)
            {
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
