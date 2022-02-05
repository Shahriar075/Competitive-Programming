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
           if(p1.ss<p2.ss)
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
    int t,k=0;
    cin>>t;
    while(t--)
    {
        if(k>0)
          cout<<"\n";
        ll n;
        cin>>n;
        map<ll,ll> mp;
        vector <pair<ll,ll> > v;
        for(ll i=0;i<n;i++)
        {
            ll a,b;
            cin>>a>>b;
            v.pb({abs(a-b),b});
        }
        sort(v.begin(),v.end(),Comparator);
        for(auto x: v)
        {
            cout<<abs(x.ff-x.ss)<<" "<<x.ss<<" ";
            for(ll j=abs(x.ff-x.ss);j<=x.ss;j++)
            {
                if(mp[j]==0){
                   cout<<j<<"\n";
                   mp[j]++;
                   break;}
            }
        }
        k++;
    }
}
