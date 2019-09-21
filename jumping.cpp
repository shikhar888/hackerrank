#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int c[n];
    for(i=0;i<n;i++)
    {
        cin>>c[i];
    }
    i=0;
    int cnt=0;
    while(i<n-1)
    {
        if(c[i+2]==1)
        {
            i++;
            cnt++;
        }
        else
        {
            cnt++;
            i=i+2;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
