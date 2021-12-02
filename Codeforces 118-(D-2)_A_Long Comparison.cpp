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
        string a,c;
        ll b,d,cnt=0,cnt2=0;
        cin>>a>>b>>c>>d;
        if(a.size()+b>c.size()+d)
            cout<<">\n";
        else if(a.size()+b<c.size()+d)
             cout<<"<\n";
        else
        {
             ll mn=min(a.size(),c.size());
             ll mx=max(a.size(),c.size());
             for(ll i=0;i<mn;i++)
             {
                 if(a[i]>c[i]){
                     cnt++;
                     break;}
                 else if(c[i]>a[i]){
                     cnt2++;
                     break;}
             }
             if(cnt==0 && cnt2==0){
             if(mx==a.size()){
             for(ll i=mn;i<mx;i++)
             {
                 if(a[i]>'0')
                    cnt++;
             }}
             else if(mx==c.size())
             {
               for(ll i=mn;i<mx;i++)
               {
                   if(c[i]>'0')
                      cnt2++;
                }  
             }}
             if(cnt==0 && cnt2==0)
                 cout<<"=\n";
              else if(cnt>0)
                 cout<<">\n";
             else
                 cout<<"<\n";
        }
    }
}
