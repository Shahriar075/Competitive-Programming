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
    ll n,k,cnt=0;
    cin>>n>>k;
    map <ll,ll> mp;
    vector< pair<ll,ll> > vp1,vp2;
    for(ll i=1;i<=n;i++)
    {
        mp[i]=0;
    }
    for(ll i=0;i<k;i++)
    {
        ll x,y;
        cin>>x>>y;
        for(ll j=x;j<=y;j++)
        {
            mp[j]++;
        }
    }
    for(auto x: mp)
    {
        if(x.ss==1)
            cnt++;
        else if(x.ss>1)
             vp1.pb({x.ff,x.ss});
        else if(x.ss==0)
              vp2.pb({x.ff,x.ss});
    }
    sort(vp1.begin(),vp1.end());
    sort(vp2.begin(),vp2.end());
    if(cnt==n)
        cout<<"OK"<<endl;
    else if(vp1.size()==0)
       cout<<vp2[0].ff<<" "<<vp2[0].ss<<endl;
    else if(vp2.size()==0)
         cout<<vp1[0].ff<<" "<<vp1[0].ss<<endl;         
    else if(vp1[0].ff<vp2[0].ff)
        cout<<vp1[0].ff<<" "<<vp1[0].ss<<endl;
    else
      cout<<vp2[0].ff<<" "<<vp2[0].ss<<endl;
}
