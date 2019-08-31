#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p,last,s=1,e=0,start=2;
    cin>>n>>p;
    if(n%2==0)
        {
            last=n+1;
        }
    else
        {
            last=n;
        }

    while(start<=last)
    {
        if(p==1)
        {
            s=0;
            break;
        }
        else if((start+1)>=p)
        {
            break;
        }
        else
        {
            s++;
            start=start+2;
        }
    }   
    while(last>=1)
    {
        if((last-1)<=p)
        {
            break;
        }
        else
        {
            last=last-2;
            e++;
        }
    }
    if(s<e)
    {
        cout<<s;
    }
    else
    {
        cout<<e;
    }
    return 0;
}
