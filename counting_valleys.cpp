#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char s[n];
    int i,cnt=0,j=0;
    bool invalley = false;
    cin>>s;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]== 'U')
        {
            j++;
        }
        else
        {
            j--;
        }
        if(j<0 && !invalley)
        {
            invalley = true;
        }
        if(j==0 && invalley)
        {
            invalley = false;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
