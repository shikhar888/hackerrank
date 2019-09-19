#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[12]={31 , 28 , 31 ,30 ,31 ,30, 31, 31, 30, 31, 30 ,31};
    int y,sum=0,m=0;
    cin>>y;
    if(y==1918)
    {
        int z = sum;
        while(sum<=256 && m<=12)
        {
            if(m==1)
            {
                sum = sum + (a[m] - 13);
                z=sum-(a[m]-13);
            }
            else
            {
                sum = sum + a[m];
                z=sum-a[m];
            }
            m++;
        }
        if(z<256)
        {
            z=256-z;
            if(m>9)
            {cout<<z<<"."<<m<<"."<<"1918"<<endl;}
            else
            {cout<<z<<".0"<<m<<"."<<"1918"<<endl;}
        }
        else
        {
            if(m>9)
            {cout<<z<<"."<<m<<"."<<"1918"<<endl;}
            else
            {cout<<z<<".0"<<m<<"."<<"1918"<<endl;}
        }
    }
    else if(y<1918)
    {
        if(y % 4 == 0)
        {
            int z = sum;
            while(sum<=256 && m<=12)
            {
            if(m==1)
            {
                sum = sum + (a[m] + 1);
                z=sum-(a[m] + 1);
            }
            else
            {
                sum = sum + a[m];
                z=sum-a[m];
            }
            m++;
            }
            if(z<256)
            {
            z=256-z;
            if(m>9)
                 {cout<<a[m-1]<<"."<<m-1<<"."<<y<<endl;}
                 else
                 {cout<<z<<".0"<<m<<"."<<y<<endl;}
            }
            else
            {
            if(m>9)
                 {cout<<a[m-1]<<"."<<m-1<<"."<<y<<endl;}
                 else
                 {cout<<z<<".0"<<m<<"."<<y<<endl;}
            }
        }
        else
        {
            int z = sum;
            while(sum<=256 && m<=12)
            {
                sum = sum + a[m];
                z=sum-a[m];
                m++;
            }
            if(z<256)
            {
            z=256-z;
            if(m>9)
                 {cout<<a[m-1]<<"."<<m-1<<"."<<y<<endl;}
                 else
                 {cout<<z<<".0"<<m<<"."<<y<<endl;}
            }
            else
            {
            if(m>9)
                 {cout<<a[m-1]<<"."<<m-1<<"."<<y<<endl;}
                 else
                 {cout<<z<<".0"<<m<<"."<<y<<endl;}
            }
        }
    }
    else
    {
        if(y % 400 == 0 || ( y%4==0 && y%100!=0))
        {
            int z = sum;
            while(sum<=256 && m<=12)
            {
            if(m==1)
            {
                sum = sum + (a[m] + 1);
                z=sum-(a[m] + 1);
            }
            else
            {
                sum = sum + a[m];
                z=sum-a[m];
            }
            m++;
            }
            if(z<256)
            {
            z=256-z;
            if(m>9)
                 {cout<<a[m-1]<<"."<<m-1<<"."<<y<<endl;}
                 else
                 {cout<<z<<".0"<<m<<"."<<y<<endl;}
            }
            else
            {
            if(m>9)
                 {cout<<a[m-1]<<"."<<m-1<<"."<<y<<endl;}
                 else
                 {cout<<z<<".0"<<m<<"."<<y<<endl;}
            }
        }
        else
        {
            int z = sum;
            while(sum<=256 && m<=12)
            {
                sum = sum + a[m];
                z=sum-a[m];
                m++;
            }
            if(z<256)
            {
            z=256-z;
                if(m>9)
                 {cout<<z<<"."<<m<<"."<<y<<endl;}
                else
                 {cout<<z<<".0"<<m<<"."<<y<<endl;}
            }
            else
            {
                if(m>9)
                 {cout<<a[m-1]<<"."<<m-1<<"."<<y<<endl;}
                 else
                 {cout<<z<<".0"<<m<<"."<<y<<endl;}
            }
        }
    }
    return 0;
}
