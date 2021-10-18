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
    ll a,b,c;
    cin>>a>>b>>c;
    ll k1=abs(a);
    ll k2=abs(b);
    if(k1==k2)
    {
        if(a<0 && b<0 && c%2!=0)
             cout<<"="<<endl;
        else if(a<0 && c%2!=0)
            cout<<"<"<<endl;
        else if(b<0 && c%2!=0)
             cout<<">"<<endl;
        else
             cout<<"="<<endl;
    }
    else if(a<=0 || b<=0)
    {
        if(c%2==0)
        {
            ll p1=abs(a);
            ll p2=abs(b);
            if(p1<p2)
               cout<<"<"<<endl;
            else if(p1>p2)
               cout<<">"<<endl;
            else
               cout<<"="<<endl;
        }
        else
        {
            if(a<b)
               cout<<"<"<<endl;
            else
               cout<<">"<<endl;
        }
    }
    else if(a<b)
       cout<<"<"<<endl;
    else if(a>b)
       cout<<">"<<endl;
    else
        cout<<"="<<endl;
}
