#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;
    long long int max=0,min=0;
    long long int arr[5];
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+5);
    for(i=0;i<4;i++)
    {
        min=min+arr[i];
        max=max+arr[i+1];
    }
    cout<<min<<" "<<max;
    return 0;
}
