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
        ll n,k,s=0,cnt=0;
        cin>>n>>k;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        s=a[0]+k;
        for(ll i=1;i<n;i++)
        {
            if(abs(s-a[i])<=k)
                cnt++;
        }
        if(cnt==n-1)
            cout<<s<<endl;
        else
           cout<<-1<<endl;
    }
}
