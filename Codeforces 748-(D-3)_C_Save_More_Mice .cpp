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
        ll n,k,sum=0,cnt=0;
        cin>>n>>k;
        ll a[k];
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        sort(a,a+k);
        for(int i=k-1;i>=0;i--)
        {
            if(a[i]>sum){
              sum+=n-a[i];
              cnt++;}
        }
        cout<<cnt<<endl;
    }
}
