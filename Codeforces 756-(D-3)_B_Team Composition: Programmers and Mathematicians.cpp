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
        ll a,b;
        cin>>a>>b;
        ll mn1=(a+b)/4;
        ll mn2=min(a,b);
        cout<<min(mn1,mn2)<<endl;
    }
}
