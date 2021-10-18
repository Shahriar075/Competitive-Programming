//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
#define m 30000
#define ll long long
#define pb push_back
using namespace std;
ll a[m+1],cnt=0;
ll prime(ll x)
{
    ll k,n,count=0;
    for(ll i=0;i<=m;i++)
    {
        a[i]=1;
    }
    a[1]=0;
    vector<long long> v;
    for(ll i=2;i<=m;i++)
    {
        if(a[i]==1){
        for(ll j=i*i;j<=m;j=j+i)
        {
                a[j]=0;
        }}
    }
    if(a[x]==1)
       cnt++;
}
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
        int n,sum=0;
        cin>>n;
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            sum+=b[i];
        }
        prime(sum);
        //cout<<"cnt "<<cnt<<endl;
        if(cnt==0)
        {
            cout<<n<<endl;
            for(int i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
           cout<<endl;
        }
        else
        {
            cnt=0;
            int k;
            for(int i=0;i<n;i++)
            {
                sum-=b[i];
                prime(sum);
                if(cnt==0)
                {
                    k=i+1;
                    break;
                }
                else{
                  sum+=b[i];
                  cnt=0;}
            }
               cout<<n-1<<endl;
                for(int i=1;i<=n;i++)
                {
                    if(k!=i)
                       cout<<i<<" ";
                }
                cout<<endl;
        }
        cnt=0;
    }
}

