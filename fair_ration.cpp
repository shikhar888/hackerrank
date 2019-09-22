#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,i,cnt=0,x=0;
    cin>>N;
    int B[N];
    for(i=0;i<N;i++)
    {
        cin>>B[i];
    }
    for(i=0;i<N;i++)
    {
        if(i == N-1 && B[i]%2 != 0)
        {
            cout<<"NO";
            x = 1;
            break;
        }
        if(B[i]%2 != 0)
        {
            B[i] = B[i] + 1;
            B[i+1] = B[i+1] + 1;
            cnt = cnt + 2;
        }
    }
    if(x == 0)
    {
        cout<<cnt;
    }
    return 0;
}
