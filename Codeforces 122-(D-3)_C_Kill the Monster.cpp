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
        ll hc,dc,hm,dm,c,wn,ar,cnt=0;
        cin>>hc>>dc>>hm>>dm>>c>>wn>>ar;
        if(c==0)
        {
            ll x=hm/dc;
            ll x1=hm%dc;
            ll y=hc/dm;
            ll y1=hc%dm;
            if(x1>0)
               x+=1;
            if(y1>0)
               y+=1;
            if(x<=y)
               cout<<"YES\n";
            else
               cout<<"NO\n";
        }
        else
        {
            ll coin=c*wn+dc;
            ll x=hm/coin;
            ll x1=hm%coin;
            ll y=hc/dm;
            ll y1=hc%dm;
             if(x1>0)
               x+=1;
            if(y1>0)
               y+=1;
             if(x<=y)
               cout<<"YES\n";
            else
            {
                while(c>=1)
                {
                     hc+=ar;
                     c-=1;
                     ll coin=c*wn+dc;
                     ll x=hm/coin;
                     ll x1=hm%coin;
                     ll y=hc/dm;
                     ll y1=hc%dm;
                     if(x1>0)
                        x+=1;
                     if(y1>0)
                        y+=1;
                    if(x<=y){
                       cnt++;
                       break;}
                }
                if(cnt>0)
                   cout<<"YES\n";
                else
                   cout<<"NO\n";
            }
        }
    }
}
