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
        ll r,c,baki;
        cin>>r>>c;
        if(r>=3)
        {
            baki=c%3;
            if(r%3==0)
              cout<<r/3*c<<endl;
            else
            {
                if(r%3==2)
                   cout<<r/3*c+(c/3)*2+baki<<endl;
                else if(c%3!=0)
                   cout<<r/3*c+(c/3)+1<<endl;
                else
                   cout<<r/3*c+(c/3)<<endl;
            }
        }
         else{
             baki=c%3;
            if(c%3==0)
                cout<<(c/3)*r<<endl;
            else if(r==2)
               cout<<(c/3)*2+baki<<endl;
            else
               cout<<(c/3)+1<<endl;
         }
    }
}
