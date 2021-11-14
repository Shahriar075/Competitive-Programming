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
    if(p1.ff<p2.ff)
       return true;
       else if(p1.ff==p2.ss)
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
        ll a,b;
        cin>>a>>b;
        if(b>a)
            cout<<a*a<<" "<<b*b*(-1)<<endl;
        else    
          cout<<a*a*(-1)<<" "<<b*b<<endl;
    }
}
