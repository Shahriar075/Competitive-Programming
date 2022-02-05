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
        string s;
        ll sum,cnt=0,idx1,idx2;
        cin>>s;
        for(ll i=s.size()-1;i>0;i--)
        {
            sum=(s[i]-48)+(s[i-1]-48);
            if(sum>9){
               cnt++;
               idx1=i-1;
               idx2=i;
               break;}
        }
        if(cnt>0)
        {
            for(ll i=0;i<s.size();i++)
            {
                if(i==idx1){
                  cout<<sum;
                  i+=1;}
                else
                  cout<<s[i];
            }
        }
        else
        {
            sum=(s[0]-48)+(s[1]-48);
            cout<<sum;
            for(ll i=2;i<s.size();i++)
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }
}
