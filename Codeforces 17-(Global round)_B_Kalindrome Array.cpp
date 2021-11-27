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
        ll n,cnt=0;
        cin>>n;
        ll a[n],b[n];
        set <ll> st;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
            st.insert(a[i]);
        }
        reverse(b,b+n);
        for(ll i=0;i<n;i++)
        {
            if(a[i]==b[i])
                 cnt++;
        }
        if(n==1 || n==2 || cnt==n || st.size()<=2)
            cout<<"YES\n";
        else
        {
            int i=0,j=n-1,cnt2,cnt3,ache=0;
            while(i<j)
            {
                cnt2=0,cnt3=0;
                 vector <ll> v1,v2,v3,nv2,nv3;
                if(a[i]!=a[j]){
                   v1.pb(a[i]);
                   v1.pb(a[j]);
                 for(ll i=0;i<n;i++)
                 {
                     if(a[i]!=v1[0])
                        v2.pb(a[i]);
                 }
                 for(ll i=0;i<n;i++)
                 {
                     if(a[i]!=v1[1])
                         v3.pb(a[i]);
                 }
                 for(int i=0;i<v2.size();i++)
                 {
                      nv2.pb(v2[i]);
                 }
                 for(int i=0;i<v3.size();i++)
                 {
                       nv3.pb(v3[i]);
                 }
                 reverse(nv2.begin(),nv2.end());
                 reverse(nv3.begin(),nv3.end());
                 for(ll i=0;i<v2.size();i++)
                 {
                     if(v2[i]==nv2[i])
                         cnt2++;
                 }
                 for(ll i=0;i<v3.size();i++)
                 {
                     if(v3[i]==nv3[i])
                         cnt3++;
                 }
                 if(cnt2==v2.size() || cnt3==v3.size()){
                    ache++;
                    break;}
                    break;}
                    i++;
                    j--;
            }
            if(ache>0)
                cout<<"YES\n";
            else
               cout<<"NO\n";
        }
    }
}
