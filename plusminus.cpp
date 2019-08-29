#include <bits/stdc++.h>

using namespace std;

int main()
{
    int no,i;
    cin>>no;
    int arr[no];
    for(i=0;i<no;i++)
    {
        cin>>arr[i];
    }
    int p=0,n=0,z=0;
    for(i=0;i<no;i++)
    {
        if(arr[i]<0)
        {
            n++;
        }
        else if(arr[i]>0)
        {
            p++;
        }
        else
        {
            z++;
        }
    }
    cout<<float(p)/no<<"\n";
    cout<<float(n)/no<<"\n";
    cout<<float(z)/no;
    return 0;
}
