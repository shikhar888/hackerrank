#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,d,i,j,k,cnt=0;
    cin>>n>>d;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(k=i+2;k<n;k++)
            {
                if(arr[k] - arr[j] > d || arr[j] - arr[i] > d)
                {
                    break;
                }
                if(arr[k] - arr[j] == d  && arr[j] - arr[i] == d)
                {
                    cnt++;
                }
            }
            if(arr[j] - arr[i] >d)
            {
                break;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
