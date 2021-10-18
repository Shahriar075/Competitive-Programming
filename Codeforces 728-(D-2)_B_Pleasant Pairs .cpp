//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#define m 100000
#define ll long long
#define pb push_back
using namespace std;
bool Comparator(pair<ll,ll> p1,pair<ll,ll> p2)
{
    if(p1.first<p2.first)
       return true;
       else if(p1.first==p2.first)
       {
           if(p1.second>p2.second)
              return true;
              else
                return false;
       }
       else
         return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0;
        cin>>n;
        ll a[n];
        //map <ll,ll> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            ll num=a[i]-(i+1);
            ll num2=a[i];
            for(int j=num-1;j<n;j+=num2)
            {
                //cout<<a[i]<<" "<<a[j]<<endl;
                if(i<j && a[i]*a[j]==i+j+2)
                     cnt++;
            }    
        }
        cout<<cnt<<endl;
    }
}
