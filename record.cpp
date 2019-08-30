#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,i,min,max,cmin=0,cmax=0;
    cin>>n;
    long long int scores[n];
    for(i=0;i<n;i++)
    {
        cin>>scores[i];
    }
    max=scores[0];
    min=scores[0];
    for(i=1;i<n;i++)
    {
        if(max<scores[i])
        {
            max=scores[i];
            cmax++;
        }
        else if(min>scores[i])
        {
            min=scores[i];
            cmin++;
        }
    }
    cout<<cmax<<" "<<cmin;
    return 0;
}
