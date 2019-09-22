#include <bits/stdc++.h>

using namespace std;

int main()
{
    char x[30][20] = {"one","two","three","four","five","six","seven","ëight","nine",        "ten","eleven","twelve","thirteen","fourteen"," fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine"};
    int h,m;
    cin>>h>>m;
    if(m==0)
    {
        cout<<x[h-1]<<" o' clock";
    }
    else if(m<=30)
    {
        if(m==1)
        {
            cout<<x[m-1]<<" minute past "<<x[h-1]; 
            return 0;
        }
        else if(m<30 && m!=15)
        {
            cout<<x[m-1]<<" minutes past "<<x[h-1];
            return 0;
        }
        else if(m==15)
        { 
            cout<<"quarter past "<<x[h-1];
            return 0;
        }
        else
        {
            cout<<"half past "<<x[h-1];
            return 0;
        }
    }
    else
    {
        if(m==45)
        {
            cout<<"quarter to "<<x[h];
            return 0;
        }
        else
        {
            cout<<x[(60-m)-1]<<" minutes to "<<x[h];
            return 0;
        }
    }
    return 0;
}
