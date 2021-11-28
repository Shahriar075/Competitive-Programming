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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,sum,cnt;
    cin>>n;
    ll a[n];
    vector<ll> vec;
    vector< pair<ll,ll> > v;
    map<ll,ll> mp;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto x: mp)
    {
        v.pb({x.ff,x.ss});
    }
    for(ll i=0;i<v.size();i++)
    {
        sum=v[i].ss;
        for(ll j=i+1;j<v.size();j++)
        {
            if(v[j].ff<=v[i].ff+5)
                 sum+=v[j].ss;
            else
                break;
        }
        vec.pb(sum);
    }
    cout<<*max_element(vec.begin(),vec.end())<<endl;
}
