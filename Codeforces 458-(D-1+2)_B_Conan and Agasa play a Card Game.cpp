//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#define m 100000
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
    ll n,sum=0,cnt=0;
    cin>>n;
    ll a[n];
    map<ll,ll> mp;
    vector< pair<ll,ll> > v;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto x: mp)
    {
        v.pb({x.ff,x.ss});
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(ll i=0;i<v.size();i++)
    {
        if(v[i].ss%2!=0){
            cnt++;
            break;}
    }
    if(n==1)
       cout<<"Conan\n";
     else
     {
         if(cnt>0)
            cout<<"Conan\n";
          else
            cout<<"Agasa\n";
     }
}
