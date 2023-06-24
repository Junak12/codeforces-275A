#include<bits/stdc++.h>
using namespace std;

#define opt() ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    opt();
    int a[3][3];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>a[i][j];
        }
    }
    //cout<<"ans"<<endl;
    int sum=0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i==0 && j==0)
            {
                sum+=(a[i][j]+a[i][j+1]+a[i+1][j]);
                if(sum%2==0)
                {
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
                sum=0;
            }
            else if(i==0 && j==1)
            {
                sum+=(a[i][j]+a[i][j+1]+a[i+1][j]+a[i][j-1]);
                if(sum%2==0)
                {
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
                sum=0;
            }
            else if(i==0 && j==2)
            {
                sum+=(a[i][j]+a[i][j-1]+a[i+1][j]);
                if(sum%2==0)
                {
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
                sum=0;
            }
            else if(i==1 && j==0)
            {
                sum+=a[i][j]+a[i][j+1]+a[i+1][j]+a[i-1][j];
                if(sum%2==0)
                {
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
                sum=0;
            }
            else if(i==1 && j==1)
            {
                sum+=a[i][j]+a[i][j+1]+a[i+1][j]+a[i-1][j]+a[i][j-1];
                if(sum%2==0)
                {
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
                sum=0;
            }
            else if(i==1 && j==2)
            {
                sum+=a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j-1];
                if(sum%2==0)
                {
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
                sum=0;
            }
            else if(i==2 && j==0)
            {
                sum+=a[i][j]+a[i-1][j]+a[i][j+1];
                if(sum%2==0)
                {
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
                sum=0;
            }
            else if(i==2 && j==1)
            {
                sum+=a[i][j]+a[i][j-1]+a[i][j+1]+a[i-1][j];
                if(sum%2==0)
                {
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
                sum=0;
            }
            else
            {
                sum+=a[i][j]+a[i][j-1]+a[i-1][j];
                if(sum%2==0)
                {
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
                sum=0;
            }
        }
        cout<<endl;
    }
}
