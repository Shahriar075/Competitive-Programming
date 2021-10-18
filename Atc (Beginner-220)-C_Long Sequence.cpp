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
    ll n,sum=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    ll x;
    cin>>x;
    if(x%sum==0)
       cout<<(x/sum)*n+1<<endl;
    else
    {
        ll k=x/sum;
        ll baki_ache=x-(sum*k);
        ll sum2=0,cnt=0;
        for(ll i=0;i<n;i++)
        {
            sum2+=a[i];
            cnt++;
            if(sum2>baki_ache)
                   break;
        }
        cout<<k*n+cnt<<endl;
    }
}
