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
    int t;
    cin>>t;
    while(t--)
    {
        ll n,sum=0,cnt=1;
        cin>>n;
        ll a[n];
        vector< pair<ll,ll> > vp;
        map<ll,ll> mp;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            vp.pb({a[i],i});
        }
        sort(vp.begin(),vp.end());
        ll k=1;
        ll b1=k-1,b2=k+1;
        for(ll i=vp.size()-1;i>=0;i--)
        {
            ll c;
            if(cnt%2!=0){
               c=abs(k-b1)*2*vp[i].ff;
               mp[vp[i].ss]=b1;
               b1--;}
            else{
               c=abs(k-b2)*2*vp[i].ff;
               mp[vp[i].ss]=b2;
               b2++;}
                sum+=c;
                cnt++;
        }
        cout<<sum<<"\n";
        cout<<k<<" ";
        for(ll i=0;i<n;i++)
        {
            cout<<mp[i]<<" ";
        }
        cout<<"\n";
    }
}
