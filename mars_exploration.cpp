#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,cnt=0,k=0,z=0;

    char s[100];
    cin>>s;
    char a[4] = {"SOS"};
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==a[k])
        {
            cnt++;
        }
        else
        {
            z++;
        }
        k++;
        if(k==3)
        {
            k=k%3;
        }
    }
    if(cnt==strlen(s))
    {
        cout<<"0"<<endl;
    }
    else
    {
    cout<<z;
    }
    return 0;
}
