//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#define m 100000
#define ll long long
#define pb push_back
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
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        vector <ll> v,v2;
        set<ll> s;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        sort(a,a+n);
        if(s.size()==1)
            cout<<-1<<endl;
        else{
            ll num;
        for(ll i=0;i<n-1;i++)
        {
            ll cnt=0;
            if(a[i]!=a[i+1]){
                num=a[i+1]-a[i];
            for(int j=0;j<n;j++)
            {
                if(i!=j){
                  ll num2=abs(a[i]-a[j]);
                  if(num2==0)
                     cnt++;
                  else if(num2%num==0)
                     cnt++; 
                }
            }
            if(cnt==n-1)
                v.pb(num);
            }
        }
        if(v.size()>0)
              cout<<*max_element(v.begin(),v.end())<<endl;
        else
        {
            for(int i=1;i<n;i++)
            {
                ll k=abs(a[i]-a[0]);
                v2.pb(k);
            }
            for(ll i=1000000;i>=0;i--)
            {
                ll cnt2=0;
            for(auto x: v2)
            {
               if(x%i==0)
                  cnt2++;
            }
            if(cnt2==n-1){
              cout<<i<<endl;
              break;}
            }
        }
        }
    }
}
