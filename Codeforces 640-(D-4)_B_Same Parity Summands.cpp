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
        ll n,k;
        cin>>n>>k;
        if(k==1){
              cout<<"YES"<<endl;
            cout<<n<<endl;}
        else if(n%2!=0 && k%2==0)
           cout<<"NO"<<endl;
        else if(n<k)
            cout<<"NO"<<endl;
        else if(n-k==1)
             cout<<"NO"<<endl;
        else if(n==k)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<k;i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else if(n%k==0)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<k;i++)
            {
                cout<<n/k<<" ";
            }
            cout<<endl;
        }
        else
        {
            ll r=n-((k-1)*2);
            if(n%2==0 && r>=2)
            {
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++)
                {
                    cout<<2<<" ";
                }
                cout<<n-((k-1)*2)<<endl;
            }
            else if(n%2==0 && r<2 && k%2!=0)
                cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;i++)
                {
                    cout<<1<<" ";
                }
                cout<<n-(k-1)<<endl;
            }
        }
    }
}
