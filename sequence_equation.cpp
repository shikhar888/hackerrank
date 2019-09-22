#include <bits/stdc++.h>

using namespace std;

int place(int a[] ,int x, int n)
{
    int i,y;
    for(i=0;i<n;i++)
    {
        if(a[i] == x)
        {
            y = (i+1);
            return y;
        }
    }
    return 0;
}

int main()
{
    int i,n,x,y;
    cin>>n;
    int p[n];
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(i=1;i<=n;i++)
    {
        x = place(p,i,n);
        y = place(p,x,n);
        cout<<y<<endl;
    }
    return 0;
}
