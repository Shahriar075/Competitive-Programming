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
        string s;
        int cnt=0;
        cin>>s;
        ll n=stoll(s);
        ll f1=s[0]-48;
        ll f2=s[s.size()-1]-48;
        for(ll i=0;i<s.size();i++)
        {
            ll k=s[i]-48;
            if(k%2!=0)
               cnt++;
        }
        if(cnt==s.size())
            cout<<-1<<endl;
        else if(n%2==0)
            cout<<0<<endl;
        else if(f1%2==0 && f2%2!=0)
              cout<<1<<endl;
        else
            cout<<2<<endl;
    }
}
