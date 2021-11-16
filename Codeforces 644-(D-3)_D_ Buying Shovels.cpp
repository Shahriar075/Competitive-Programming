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
        ll a,b,k;
        cin>>a>>b;
        vector<ll> v;
        if(b==1)
           cout<<a<<endl;
        else if(a==b || a<=b)
           cout<<1<<endl;
        else
        {
            for(ll i=2;i*i<=a;i++)
            {
                if(a%i==0)
                {
                    if(i<=b){   
                        k=a/i;
                       v.pb(k);}
                    if(k!=i)
                    {
                        if(k<=b){
                        ll k2=a/k;
                        v.pb(k2);}
                    }
                }
            }
            v.pb(a);
            cout<<*min_element(v.begin(),v.end())<<endl;
        }
    }
}
