#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int n,m,c,cnt,i,j;
    cin>>n>>m;
    int a[n],b[m];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(b,b+m);
    int x=a[n-1];
    int y=b[0];
    c=0;
    for(i=x;i<=y;i++)
    {
        cnt=0;
        for(j=0;j<n;j++)
        {
            if(i%a[j]==0)
            {
                cnt++;
            }
        }
        for(j=0;j<m;j++)
        {
            if(b[j]%i==0)
            {
                cnt++;
            }
        }
        if(cnt == (n+m))
        {
            c++;
        }
    }
    cout<<c;
    return 0;
}
