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
    int t;
    cin>>t;
    while(t--)
    {
        ll n,sum1=0,sum2=0,cnt=0;
        cin>>n;
        ll a[n],b[n];
        vector<ll> v;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum1+=a[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
            sum2+=b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(ll i=0;i<n;i++)
        {
            v.pb(b[i]-a[i]);
        }
        if(n==1)
        {
             if(sum2-sum1==0)
                cout<<"YES"<<endl;
            else if(sum2-sum1!=1)
                 cout<<"NO"<<endl;
            else
                 cout<<"YES"<<endl;
        }
        else if(sum1>sum2)
            cout<<"NO"<<endl;
        else
        {
            for(ll i=0;i<v.size();i++)
            {
                if(v[i]==1 || v[i]==0)
                       cnt++;
            }
            if(cnt==v.size())
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            }
        }
}
