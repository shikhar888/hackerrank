#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,h,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        h=1;
        cin>>n;
        for(int p=1;p<=n;p++)
        {
            if(p%2==0)
            {
                h=h+1;
            }
            else
            {
                h=h*2;
            }
        }
        cout<<h<<"\n";
    }
    return 0;
}
