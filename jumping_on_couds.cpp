#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i,e=100;
    cin>>n>>k;
    int c[n];
    for(i=0;i<n;i++)
    {
        cin>>c[i];
    }
    i=0;
    while((i+k)%n!=0)
    {
        i=(i+k)%n;
        e--;
        if(c[i]==1)
        {
            e=e-2;
        }   
    }
    e--;
    i=(i+k)%n;
    if(c[i]==1)
    {
        e=e-2;
    }
    cout<<e<<endl;
    return 0;
}
