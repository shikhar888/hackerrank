#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,cnt=1,x,z=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    x = a[0];
    for(i=1;i<n;i++)
    {
        if( (a[i] - x) < 2 )
        {
            cnt ++;
            z = max(z,cnt);
        }
       else
       {
           x=a[i];
           cnt = 1;
       }
    }
    cout<<z<<endl;
}
