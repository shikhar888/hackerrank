#include <bits/stdc++.h>

using namespace std;
int digit(long long int i)
{
    long long int cnt = 0;
    while(i!=0)
    {
        cnt++;
        i = i/10;

    }
    return cnt;
}

int main()
{
    long long int  m=0,p,q,i,right,left,d;
    cin>>p>>q;
    for(i=p;i<=q;i++)
    {
        d = digit(i);
        long long int  y = i*i;
        long long int l=pow(10,d);
        right = y % l;
        left =  y / l;
        if(left + right == i)
        {
            cout <<i<<" ";
            m++;
        }
    }
    if(m==0)
    {
        cout<<"INVALID RANGE";
    }
    return 0;
}
