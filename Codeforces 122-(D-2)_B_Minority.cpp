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
        string s;
        ll one=0,zero=0;
        cin>>s;
        set<char> st;
        vector<ll> v;
        if(s.size()<=2)
           cout<<0<<"\n";
        else
        {
            for(ll i=0;i<s.size();i++)
            {
                st.insert(s[i]);
                if(s[i]=='1')
                   one++;
                else if(s[i]=='0')
                   zero++;
                if(one>zero)
                   v.pb(zero);
                else if(zero>one)
                    v.pb(one);
            }
            if(st.size()==1)
               cout<<0<<"\n";
            else
              cout<<*max_element(v.begin(),v.end())<<endl;
        }
    }
}
