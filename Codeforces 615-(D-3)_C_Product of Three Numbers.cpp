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
        ll n,k=0,a,cnt=0;
        cin>>n;
        set<ll> st;
        if(n<24)
           cout<<"NO\n";
        else{
        for(ll i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                k=n/i;
                a=i;
                break;
            }
        }
        if(k!=0){
        for(ll i=2;i*i<=k;i++)
        {
            if(k%i==0)
            {
                st.insert(a);
                st.insert(i);
                st.insert(k/i);
                if(st.size()==3){
                   cnt++;
                   break;}
            }
            if(cnt==0)
               st.clear();
        }}
        if(cnt>0)
        {
            cout<<"YES\n";
            for(auto x: st)
            {
                cout<<x<<" ";
            }
            cout<<"\n";
        }
        else
           cout<<"NO\n";}
    }
}
