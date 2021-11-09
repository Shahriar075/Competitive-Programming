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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,n1,n2,n_sum=0,cnt=0,cnt2=0;
        cin>>n>>k;
        ll a[n],b[n];
        vector<ll> v1,v2;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            v1.pb(a[i]);
        }
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
             v2.pb(b[i]);
        }
        sort(v1.begin(),v1.end());
        reverse(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        reverse(v2.begin(),v2.end());
        int i=0,j=0;
        while(1)
        {
             n1=v1[i];
             n2=v2[j];
            if(cnt<k && n2>n1){
               n_sum+=n2;
               cnt++;
               j++;
               cnt2++;}
            else{
               n_sum+=n1;
               i++;
               cnt2++;}
            if(cnt2==n)
               break;
        }
        cout<<n_sum<<endl;
    }
}
        
