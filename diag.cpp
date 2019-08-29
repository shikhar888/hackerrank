#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,d1=0,d2=0;
    cin>>n;
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for (i = 0; i < n; i++) 
    { 
        d1 += arr[i][i]; 
        d2 += arr[i][n-i-1]; 
    } 
    cout<<abs(d1-d2);
    return 0;
}
