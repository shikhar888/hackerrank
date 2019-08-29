#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b,a,h;
    cin>>b;
    cin>>a;
    h=(2*a)/b;
    if((2*a)%b==0)
    {
        cout<<h;
    }
    else
    {
        cout<<h+1;
    }
    return 0;
}
