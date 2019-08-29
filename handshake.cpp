#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,t,j,n,cnt;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cnt=0;
        cin>>n;
        for(j=1;j<=(n-1);j++)
        {
            cnt=cnt+j;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
