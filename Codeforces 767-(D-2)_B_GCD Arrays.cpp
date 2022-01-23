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
        ll a,b,c,k;
        cin>>a>>b>>c;
        if(a-b==0 && a==b && a!=1)
           cout<<"YES\n";
        else if(a-b==0 && a==b && a==1)
           cout<<"NO\n";
        else
        {
            if(a%2!=0 && b%2!=0)
               k=(b-a)/2+1;
            else if(a%2==0 && b%2==0)
                k=(b-a)/2;
            else
                k=((b-a)+1)/2;
        if(k<=c)
           cout<<"YES\n";
        else
          cout<<"NO\n";
        }
    }
}
