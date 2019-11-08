#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,mini,max=0;
    cin>>n>>m;
    if(n==m)
    {
        cout<<0;
        return 0;
    }
    int i,j,x,y,z;
    int m1[m];
    for(i=0;i<m;i++)
    {
        cin>>m1[i];
    } 
    sort(m1,m1+m);
    if(m1[0] != 0)
    {
        max = m1[0];   
    }
        
        for(i=0;i<m-1;i++)
        {
            x = m1[i];
            y = m1[i+1];
            z = (x + y)/2;
            mini = min(abs(z-x) , abs(z-y));
            if(mini > max)
            {
                max = mini;
            }
        }
    if(m1[m-1] < n-1)
    {
        if( max < (n-1)-m1[m-1])
        {
            max = (n-1)-m1[m-1];
        }
    }
    cout<<max;
    return 0;
}
