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
    ll n,s;
    cin>>n>>s;
    if(n==s)
        cout<<"NO"<<endl;
    else if(n==1)
    {
        cout<<"YES"<<endl;
        cout<<s<<endl;
        cout<<(s+1)/2<<endl;
    }
    else
    {
        ll k=n-1;
        if(s-(k+1)<=n-1)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n-1;i++)
            {
                cout<<1<<" ";
            }
            cout<<s-(n-1)<<endl;
            cout<<(n-1)+1<<endl;
        }
    }
}
