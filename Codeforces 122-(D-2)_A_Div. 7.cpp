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
        ll n,cnt1=0,cnt2=0;
        cin>>n;
        string s=to_string(n);
        if(n%7==0)
           cout<<n<<endl;
        else
        {
            ll a=n/7;
            ll x=7*a;
            ll y=7*(a+1);
            string s1=to_string(x);
            string s2=to_string(y);
            for(ll i=0;i<s1.size();i++)
            {
                if(s1[i]==s[i])
                   cnt1++;
                if(s2[i]==s[i])
                    cnt2++;
            }
            if(cnt1>cnt2)
               cout<<x<<endl;
            else
               cout<<y<<endl;   
        }
    }
}
