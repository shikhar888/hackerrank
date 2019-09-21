#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    char s[11];
    char s1[9];
    cin>>s;
    if(s[8] == 'A' && s[9] == 'M')
    {
        if(s[0] == '1' && s[1] == '2')
        {
            s1[0] = '0';
            s1[1] = '0';
            for(i=2 ; i<strlen(s)-2 ; i++)
            { 
                s1[i] = s[i];
            }
            for(i=0;i<strlen(s1);i++)
            {
                cout<<s1[i];
            }
        }
        else
        {
            for(i=0 ; i<strlen(s)-2 ; i++)
            { 
                s1[i] = s[i];
            }
            for(i=0;i<strlen(s1);i++)
            {
                cout<<s1[i];
            }
        }
    }
    else if(s[8] == 'P' && s[9] == 'M')
    {
        if(s[0] == '1' && s[1] == '2')
        {
            for(i=0 ; i<strlen(s)-2 ; i++)
            { 
                s1[i] = s[i];
            }
            for(i=0;i<strlen(s1);i++)
            {
                cout<<s1[i];
            }
        }
        else
        {
            if( (s[0]-'0') == '0' && (s[1]-'0') == '8' )
            {
               s[0] = '2';
               s[1] = '0';
               for(i=0;i<strlen(s);i++)
            {
                cout<<s[i];
            }
            }
            else if( (s[0]-'0') == '0' && (s[1]-'0') == '9' )
            {
                s[0] = '2';
                s[1] = '1';
                for(i=0;i<strlen(s);i++)
            {
                cout<<s[i];
            }
            }
            else
            {
                int l = s[0] - '0' + 1;
                int p = s[1] - '0' + 2;
                for(i=0 ; i<strlen(s)-4 ; i++)
                { 
                    s1[i] = s[i+2];
                }
                cout<<l<<p;
                for(i=0;i<strlen(s1);i++)
                {
                    cout<<s1[i];
                }
            }
        }
    }
    return 0;
}
