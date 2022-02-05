//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#define m 1e6
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;
bool Comparator(pair<ll,ll> p1,pair<ll,ll> p2)
{
    if(p1.ff<p2.ff)
       return true;
       else if(p1.ff==p2.ff)
       {
           if(p1.ss>p2.ss)
              return true;
              else
                return false;
       }
       else
         return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,sum=0;
    cin>>n;
    ll a[n];
    vector<ll> v1,v2;
    map<ll,ll> mp;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>=1 && a[i]<=n && mp[a[i]]==0)
             mp[a[i]]++;
        else
          v2.pb(a[i]);
    }
    sort(v2.begin(),v2.end());
    int k=0;
    for(ll i=1;i<=n;i++)
    {
        if(mp[i]==0){
           sum+=abs(i-v2[k]);
           k++;}
    }
    cout<<sum<<endl;
}
