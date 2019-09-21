#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int m=0;
    int cnt=1;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            cnt++;
        }
        else
        {
            cnt=1;
        }
        m=max(m,cnt);
    }
    cout<<(n-m)<<endl;
    return 0;
}
