#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,sum;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<2)
        {
            return 0;
        }
        unsigned long long int n1=0,n2=2,n3;
        sum = n1 + n2;
        while(n2<=n)
        {
            n3 = 4*n2 + n1;
            if(n3>n)
            {
                break;
            }
            n1=n2;
            n2=n3;
            sum = sum + n2;
        }
        cout<<sum<<endl;
    }
    return 0;
}
