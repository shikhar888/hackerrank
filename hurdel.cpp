#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i;
    cin>>n>>k;
    int height[100];
    for(i=0;i<n;i++)
    {
        cin>>height[i];
    }
    sort(height,height+n);
    if((height[n-1]-k)>0)
    {
       cout<<height[n-1]-k;
    }
    else
    {
        cout<<0;
    }
    return 0;
}
