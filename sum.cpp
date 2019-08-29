#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i,n,ar[1000000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int c=0;
    for(i=0;i<n;i++)
    {
        c=c+ar[i];
    }
    cout<<c;
    return 0;
}
