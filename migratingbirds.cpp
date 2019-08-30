#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,i,j,t=0,q=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int max,c=1;
        q=arr[0];
        for(i=0;i<n-1;i++)
        {
            max=1;
            while(arr[i]==arr[i+1])
            {
                max++;
                i++;
            }
            if(max>c)
            {
                q=arr[i];
                c=max;   
            }
        }
        cout<<q;
}
