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
        ll n,cnt=0,one=0,ans=0;
        cin>>n;
        ll a[n];
        vector <ll> v;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            if(a[i]==0 && a[i+1]==0)
            {
                cnt++;
                break;
            }
        }
        if(cnt>0)
           cout<<-1<<"\n";
        else{
        for(ll i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                one++;
                ll j;
                for(j=i+1;j<n;j++)
                {
                    if(a[j]==1)
                       one++;
                    else
                      break;
                }
                v.pb(one);
                one=0;
                i=j;
            }
        }
        for(ll i=0;i<v.size();i++)
        {
            if(v[i]>1)
              ans+=(v[i]-1)*5+1;
            else
              ans+=1;
        }
        cout<<ans+1<<"\n";}
    }
}
