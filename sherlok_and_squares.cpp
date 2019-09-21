#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long q,j,a,b,cnt;
    cin>>q;
    for(j=0;j<q;j++)
    {
        cnt=0;
        cin>>a>>b;
        cnt = (long long)sqrt(b) - (long long)sqrt(a);
        if(sqrt(a)==(long long)sqrt(a))
        cnt++;
        cout<<cnt<<"\n";
    }
    return 0;
}
