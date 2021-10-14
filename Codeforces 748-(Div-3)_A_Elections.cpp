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
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,cnt=0;
        cin>>a>>b>>c;
        vector<ll> v;
        v.pb(a);
        v.pb(b);
        v.pb(c);
        sort(v.begin(),v.end());
        if(a==b && b==c)
           cout<<1<<" "<<1<<" "<<1<<endl;
        else
        {
            if(v[2]==a)
               cnt++;
             if(v[2]==b)
               cnt++;
             if(v[2]==c)
               cnt++;
            if(cnt==2)
            {
                if(v[2]==a && v[2]==b)
                   cout<<1<<" "<<1<<" "<<v[2]-c+1<<endl;
                else if(v[2]==b && v[2]==c)
                   cout<<v[2]-a+1<<" "<<1<<" "<<1<<endl;
                else
                  cout<<1<<" "<<v[2]-b+1<<" "<<1<<endl;
            }
            else
            {
                 if(v[2]==a)
                   cout<<0<<" "<<v[2]-b+1<<" "<<v[2]-c+1<<endl;
                else if(v[2]==b)
                   cout<<v[2]-a+1<<" "<<0<<" "<<v[2]-c+1<<endl;
                else
                  cout<<v[2]-a+1<<" "<<v[2]-b+1<<" "<<0<<endl;
            }
        }
    }
}
