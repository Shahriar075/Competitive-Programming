//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#define m 1000000
#define ll long long
using namespace std;
int main()
{
    ll n,cnt=0,k,num,sum=0;
    cin>>n;
    ll a[n];
    set<ll> s;
    map<ll,ll> mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto x: mp)
    {
        if(x.second>=2)
        {
            if(x.second>3){
               k=x.second-1;
               num=(k*(k+1))/2;
               sum+=num;}
            else if(x.second==3)
                sum+=x.second;
            else
              sum+=x.second-1;
        }
    }
    ll p=n-1;
    cout<<(p*(p+1))/2-sum<<endl;
}
