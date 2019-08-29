#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,k,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<"#";
        }
        cout<<"\n";
    }
    return 0;
}
