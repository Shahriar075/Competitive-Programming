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
    ll n,even=0,odd=0,sum=0;
    cin>>n;
    ll a[n];
    vector <ll> o,e;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0){
            even++;
            e.pb(a[i]);}
        else{
           odd++;
           o.pb(a[i]);}
    }
    sort(e.begin(),e.end());
    sort(o.begin(),o.end());
    if(n==1)
        cout<<0<<endl;
    else if(n%2==0 && even==odd)
        cout<<0<<endl;
    else if(n%2!=0 && odd-1==even || n%2!=0 && even-1==odd)
         cout<<0<<endl;
    else
    {
        ll k=min(even,odd);
        if(k==odd)
        {
            k+=1;
            for(ll i=0;i<e.size()-k;i++)
            {
                sum+=e[i];
            }
            cout<<sum<<endl;
        }
        else
        {
             k+=1;
            for(ll i=0;i<o.size()-k;i++)
            {
                sum+=o[i];
            }
            cout<<sum<<endl;
        }
    }
}
