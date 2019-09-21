#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,k=0,l=0,m=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int left[n],equal[n],right[n];
    int p = arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i] == p)
        {
            equal[k] = p;
            k++;
        }
        else if(arr[i] < p)
        {
            left[l] = arr[i];
            l++;
        }
        else
        {
            right[m] = arr[i];
            m++;
        }
    }
    for(i=0;i<l;i++)
    {
        cout<<left[i]<<" ";
    }
    for(i=0;i<k;i++)
    {
        cout<<equal[i]<<" ";
    }
    for(i=0;i<m;i++)
    {
        cout<<right[i]<<" ";
    }
    return 0;
}
