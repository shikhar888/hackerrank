#include <bits/stdc++.h>

using namespace std;
int main()
{
    long int i,cnt=1;
    long int n;
    cin>>n;
    long int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);  
    for(i=n-1;i>0;i--)
    {
        if(ar[i] == ar[i-1])
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
