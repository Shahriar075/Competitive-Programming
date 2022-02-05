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
    ll t;
    cin>>t;
    map<string,ll> mp;
    vector<string> vs;
    map<string,string> mp1,mp2;
    vector< pair<string,string> > v1,v2;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        v1.pb({a,b});
        mp1[a]=b;
        mp[a]++;
        mp[b]++;
    }
    for(auto x: v1)
    {
        if(mp[x.ff]==1 && mp[x.ss]==1)
            v2.pb({x.ff,x.ss});
        else if(mp[x.ff]<2)
           v2.pb({x.ff,mp1[x.ss]});
    }
    cout<<v2.size()<<endl;
    for(auto x: v2)
    {
         cout<<x.ff<<" ";
         if(mp1[x.ss]=="")
            cout<<x.ss<<endl;
         else
         {
             string s=x.ss;
             for(auto y: v1)
             {
                 if(s==y.ff){
                    vs.pb(y.ss);
                    s=y.ss;}
             }
             cout<<vs[vs.size()-1]<<endl;
             vs.clear();
         }
    }
}
