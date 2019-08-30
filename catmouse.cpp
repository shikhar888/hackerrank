#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q,x,y,z,c=0;
    cin>>q;
    int i;
    for(i=0;i<q;i++)
    {
        cin>>x>>y>>z;
        if(abs(x-z)<abs(y-z))
        {
            cout<<"Cat A\n";
        }
        else if(abs(x-z)>abs(y-z))
        {
            cout<<"Cat B\n";
        }
        else 
        {
            cout<<"Mouse C\n";
        }
    }
    return 0;
}
