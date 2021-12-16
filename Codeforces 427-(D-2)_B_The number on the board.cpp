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
    ll k,sum=0,sum2=0,cnt=0;
    string s;
    cin>>k>>s;
    for(ll i=0;i<s.size();i++)
    {
        ll n=s[i]-48;
        sum+=n;
    }
    ll d=k-sum;
    if(sum>=k)
       cout<<0;
    else
    {
        sort(s.begin(),s.end());
        for(ll i=0;i<s.size();i++)
        {
            ll n=s[i]-48;
            sum2+=(9-n);
            cnt++;
            if(sum2>=d)
               break;
        }
        cout<<cnt<<endl;   
    }
}
