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
    ll a,b;
    cin>>a>>b;
    map<string,ll> mp;
    vector<string> v;
    for(ll i=0;i<a;i++)
    {
        string s;
        cin>>s;
        v.pb(s);
    }
    for(ll i=0;i<b;i++)
    {
        string s;
        cin>>s;
        mp[s]++;
    }
    for(auto x: v)
    {
        if(mp[x]>0)
          cout<<"Yes\n";
        else
          cout<<"No\n";
    }
}
