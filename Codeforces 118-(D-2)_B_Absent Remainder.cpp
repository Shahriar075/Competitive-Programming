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
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll k=n-1;
        for(ll i=0;i<n/2;i++)
        {
            cout<<a[k]<<" "<<a[0]<<endl;
            k--;
        }
    }
}
