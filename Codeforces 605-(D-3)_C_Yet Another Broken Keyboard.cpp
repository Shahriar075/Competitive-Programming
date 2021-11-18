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
    ll n,k,cnt=1,ans=0;
    string s;
    char c;
    cin>>n>>k>>s;
    vector<char> v;
    vector <ll> v2,v3;
    for(int i=0;i<k;i++)
    {
        cin>>c;
        v.pb(c);
    }
    for(int i=0;i<v.size();i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(s[j]==v[i])
               v2.pb(j+1);
        }   
    }
    if(v2.size()==0)
        cout<<0<<endl;
    else{
    sort(v2.begin(),v2.end());
     for(ll i=0;i<v2.size()-1;i++)
     {
         if(i==v2.size()-2)
         {
             if(v2[i+1]-v2[i]==1)
                 v3.pb(cnt+1);
              else
              {
                  v3.pb(cnt);
                  v3.pb(1);
              }
         }
         else if(v2[i+1]-v2[i]>1){
             v3.pb(cnt);
             cnt=1;}
         else
            cnt++;
     }
     for(auto x: v3)
     {
         ll r=x-1;
         ll a=(r*(r+1))/2;
         ans+=a;
     }
     cout<<ans+v2.size()<<endl;
    }
}
