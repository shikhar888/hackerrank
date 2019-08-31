#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b,n,m,i,j;
    cin>>b>>n>>m;
    int Keyboards[n];
    int drives[m];
    for(i=0;i<n;i++)
    {
        cin>>Keyboards[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>drives[i];
    }
    int max=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if((Keyboards[i]+drives[j]<=b) && (Keyboards[i]+drives[j]>=max))
            {
                max=Keyboards[i]+drives[j];
            }
        }
    }
    if(max==0)
    {
        cout<<-1;
    }
    else
    {
        cout<<max;
    }
    return 0;
}
