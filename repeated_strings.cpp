#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,cnt=0;
    char s[100];
    cin>>s;
    cin>>n;
    if(n<=strlen(s))
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a')
            {
                cnt++;
            }
        }
        cout<<cnt;
    }
    else
    {
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]=='a')
            {
                cnt++;
            }
        }
        cnt = cnt * (n / strlen(s));
        if(n % strlen(s) == 0)
        {
            cout<<cnt;
        }
        else
        {
            for(int i=0 ; i<(n%strlen(s)) ; i++)
            {
                if(s[i]=='a')
                {
                    cnt++; 
                }
            }
            cout<<cnt;
        }
    }
    return 0;
}
