#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    long long int cnt=0;
    int n;
    long long int a[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cnt=cnt+a[i];
    }
    cout<<cnt;
    return 0;
}
