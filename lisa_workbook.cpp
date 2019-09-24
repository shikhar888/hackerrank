#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,k,i,special_prob=0,page=0;
    cin>>n>>k;
    int total_prob;
    int problem;
    for(i=1;i<=n;i++)
    {
        page++;
        cin>>total_prob;
        problem = 1;
        while(total_prob>0)
        {
            total_prob--;
            if(problem == page)
            {
                special_prob++;
            }
            if(problem%k==0 && total_prob!=0)
            {
                page++;
            }
            problem++;
        }
    }
    cout<<special_prob<<endl;
    return 0;
}
