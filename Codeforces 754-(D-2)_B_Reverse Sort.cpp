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
        ll n,cnt=1;
        string s,s2;
        cin>>n>>s;
        s2=s;
        vector <ll> v;
        for(int i=0;i<n;i++)
        {
            if(s[i+1]>=s[i])
                 cnt++;
        }
        if(cnt==n)
           cout<<0<<endl;
        else
        {
            cout<<1<<endl;
            sort(s2.begin(),s2.end());
            for(int i=0;i<n;i++)
            {
                if(s2[i]!=s[i])
                   v.pb(i+1); 
            }
            cout<<v.size()<<" ";
            for(auto x: v)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
}
