#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i,a[100],b[100],al=0,bo=0;
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<3;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            al++;
        }
        else if(b[i]>a[i])
        {
            bo++;
        }
    }
    cout<<al<<" "<<bo;
    return 0;
}
