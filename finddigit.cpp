#include<bits/stdc++.h>
using namespace std;
int main()
{
         long long int i,u,d,cnt,n,t;
         cin>>t;
         for(i=0;i<t;i++)
   {
       cin>>n;
       u=n;
       cnt=0;
     while(n>0)
     {
             d=n%10;
         
         if(d!=0)
         {
             if(u%d==0)
             {
             cnt++;
             }
             }
         n=n/10;
     }
     cout<<cnt<<"\n";
   }
   return 0;
}
