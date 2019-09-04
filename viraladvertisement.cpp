#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,c=2,n,l=2,s=5;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        s=l*3;
        l=s/2;
        c=c+l;
    }
    cout<<c;
    return 0;
}
