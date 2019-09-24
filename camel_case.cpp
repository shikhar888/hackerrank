#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[100000];
    cin>>s;
    int i,cnt=1;
    for(i=0;i<strlen(s);i++)
    {
        if(isupper(s[i]))
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
