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
        ll n,k,b,cnt,sum=0;
        cin>>n>>k>>b;
        ll a[n];
        vector<ll> v;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(ll i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]>b)
            {
                cnt=((a[i+1]-a[i])-1)/b;
                v.pb(cnt);
            }
        }
       int i;
       sort(v.begin(),v.end());
       for(i=0;i<v.size();i++)
       {
             sum+=v[i];
           if(sum>k)
               break;
       }
       cout<<v.size()-i+1<<endl;
}
