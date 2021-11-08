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
        ll n,m1,m2,k,d,cnt=0,lcm,j=1;
        cin>>n;
        vector<pair<ll,ll> >v1,v2;
        if(n%2==0)
           cout<<n/2<<" "<<n/2<<endl;
        else{
        for(ll i=2;i*i<=n;i++)
        {
             if(n%i==0)
             {
                  k=n/i;
                  d=n-i;
                  if(d%i==0)
                   {
                       cnt++;
                       m1=i;
                       m2=d;
                         lcm=(m1*m2)/__gcd(m1,m2);
                       v1.pb({lcm,j});
                       v2.pb({m1,m2});
                       j++;
                   } 
                 if(k!=i)
                 {
                     d=n-k;
                     if(d%k==0)
                     {
                       cnt++;
                       m1=k;
                       m2=d;
                       lcm=(m1*m2)/__gcd(m1,m2);
                       v1.pb({lcm,j});
                       v2.pb({m1,m2});
                       j++;
                      } 
                 }
             }
        }
        sort(v1.begin(),v1.end());
        if(cnt>0)
            cout<<v2[v1[0].second-1].first<<" "<<v2[v1[0].second-1].second<<endl;
        else
           cout<<1<<" "<<n-1<<endl;
        }
    }
}
