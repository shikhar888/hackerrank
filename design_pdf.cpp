#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h[26],i,val[11];
    for(i=0;i<26;i++)
    {
        cin>>h[i];
    }
    char word[11];
    cin>>word;
    for(i=0;i<strlen(word);i++)
    {
        int x = int(word[i]) - 97;
        val[i] = h[x];
    }
    int max=0;
    int z=sizeof(val)/sizeof(val[0]);
    for(i=0;i<z;i++)
    {
        if(val[i]>max)
        {
            max=val[i];
        }
    }
    cout<<(strlen(word) * max)<<endl;
    return 0;
}
