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
        ll n,idx1,idx2,cnt1=0,cnt2=0,cnt3=0,cnt4=0,c=0,c2=0;
        cin>>n;
        ll a[n];
        vector <ll> v,v2;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            v.pb(a[i]);
        }
        sort(v.begin(),v.end());
        ll x=v[n-1];
        ll y=v[n-2];
        if(x==a[n-1])
           cout<<0<<"\n";
        else{
        for(ll i=n-1;i>=0;i--)
        {
            if(a[i]==x){
               idx1=i+1;
               break;}   
        }
        for(ll i=n-1;i>=0;i--)
        {
            if(a[i]==y){
              idx2=i+1; 
              break;}  
        }
        ll num=a[n-1];
        for(ll i=n-2;i>=idx1;i--)
        {
            cnt1++;
            if(num>=a[i])
               cnt2++;
            else{
              num=a[i];
              c++;}
        }
        num=a[n-1];
        for(ll i=n-2;i>=idx2;i--)
        {
            cnt3++;
            if(num>=a[i])
               cnt4++;
            else
            {
                num=a[i];
                c2++;
            }
        }
        if(cnt1==cnt2)
           cout<<1<<"\n";
        else{
        idx1=n-idx1;
        idx2=n-idx2;
        v2.pb(idx1);
        v2.pb(idx2+1);
        v2.pb(c+1);
        v2.pb(c2+2);
        if(cnt3==cnt4)
           v2.pb(2);
         cout<<*min_element(v2.begin(),v2.end())<<"\n";
        }
        }
    }
}
