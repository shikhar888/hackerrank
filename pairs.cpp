#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,n,k,cnt=0;
    cin>>n>>k;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    } 
    sort(a,a+n);
    long long int l = 0;
    for(i=1;i<n;i++)
    {
        if(abs(a[l]-a[i]) == k)
        {
            cnt++;
            l++;
            i=l;
        }
        else if(abs(a[l]-a[i]) > k)
        {
            l++;
            i=l;
        }
    }
    cout<<cnt;
    return 0;
}
