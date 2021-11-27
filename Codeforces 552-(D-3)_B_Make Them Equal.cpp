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
    ll n,k;
    cin>>n;
    ll a[n];
    set<ll> st;
    vector<ll> v;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        st.insert(a[i]);
    }
    for(auto x: st)
    {
        v.pb(x);
    }
    sort(v.begin(),v.end());
    if(n==1)
       cout<<0<<endl;
    else if(st.size()==1)
        cout<<0<<endl;
    else if(st.size()>3)
         cout<<-1<<endl;
    else if(n==2 || st.size()==2)
    {
        if(v[0]%2==0 && v[1]%2==0)
            cout<<abs(v[1]-v[0])/2<<endl;
        else if(v[0]%2!=0 && v[1]%2!=0)
            cout<<abs(v[1]-v[0])/2<<endl;
        else
           cout<<abs(v[1]-v[0])<<endl;
    }
    else
    {
        st.clear();
        for(int i=0;i<v.size()-1;i++)
        {
             k=v[i+1]-v[i];
             st.insert(v[i+1]-v[i]);
        }
        if(st.size()==1)
            cout<<k<<endl;
        else
           cout<<-1<<endl;
    }
}
