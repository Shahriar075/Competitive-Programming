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
    int t;
    cin>>t;
    while(t--)
    {
        vector<ll> v;
        ll x,y,z,cnt=0;
        for(ll i=0;i<7;i++)
        {
            ll a;
            cin>>a;
            v.pb(a);
        }
        ll k=*max_element(v.begin(),v.end());
        for(ll i=0;i<v.size();i++)
        {
            for(ll j=0;j<v.size();j++)
            {
                if(v[i]+v[j]+v[j+1]==k)
                {
                    cnt++;
                    x=v[i];
                    y=v[j];
                    z=v[j+1];
                    break;
                }
                if(cnt>0)
                   break;
            }
        }
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
}
