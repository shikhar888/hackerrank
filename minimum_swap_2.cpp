#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cnt=0,temp,add,n;
    cin>>n;
    int arr[n];
   
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        
    for(int i=0; i<n; i++)
    {
        if(arr[i] != i+1) 
        {
            for(int j=i+1; j<n; j++) 
            {
                if(arr[j] == i+1) 
                {
                    add = j;
                    break;
                }
            }
            temp = arr[i];
            arr[i] = arr[add];
            arr[add] = temp;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
