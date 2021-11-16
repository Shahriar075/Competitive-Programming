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
        string s;
        cin>>s;
        int cnt=0,ans=0;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='(')
               cnt++;
            else
               cnt--;
               if(cnt<0){
                  ans++;
                  cnt=0;}
        }
        if(cnt>0)
           ans+=cnt;
        cout<<s.size()-ans<<endl;
}
