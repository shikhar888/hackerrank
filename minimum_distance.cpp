#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,x,y;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    i=0;
    x=n-1;
    y=INT_MAX;
    while(i<n)
    {
        while(i<x)
        {
            if(a[i]==a[x] && a[i]!='*')
            {
                y=min(y,abs(x-i));
                a[i]='*';
                a[x]='*';
                break;
            }
            x--;
        }
        x=n-1;
        i++;
    }
    if(y==INT_MAX)
    {
        cout<<-1;
    }
    else
    {
        cout<<y<<endl;
    }
    return 0;
}
