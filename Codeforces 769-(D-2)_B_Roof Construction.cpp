// Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#define m 1e6
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;
bool Comparator(pair<ll, ll> p1, pair<ll, ll> p2)
{
    if (p1.ff < p2.ff)
        return true;
    else if (p1.ff == p2.ff)
    {
        if (p1.ss > p2.ss)
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
    cin >> t;
    while (t--)
    {
        ll n,k=1,k2=1;
        cin>>n;
        if(n==2)
          cout<<0<<" "<<1<<endl;
        else
        {
            while(1)
            {
                k+=k2;
                if(k==n-1)
                   break;
                else if(k>n-1)
                {
                    k-=k2;
                    break;
                }
                k2=k;
            }
            for(ll i=n-1;i>=k;i--)
            {
                cout<<i<<" ";
            }
            for(ll i=0;i<k;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}
