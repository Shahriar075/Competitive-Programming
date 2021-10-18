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
       ll n,cnt=0;
       cin>>n;
       ll arr[n][5];
       for(int i=0;i<n;i++)
       {
          for(int j=0;j<5;j++)
          {
             cin>>arr[i][j];
          }
       }
       for(int i=0;i<5;i++)
       {
         for(int j=i+1;j<5;j++)
          {
             int both=0,first=0,second=0;
            for(int k=0;k<n;k++)
            {

               if(arr[k][i]==1 && arr[k][j]==1)
                     both++;
               else if(arr[k][i]==1)
                    first++;
               else if(arr[k][j]==1)
                   second++;
            }
            if(both+first+second==n)
            {
               int mx=max(first,second);
               int mn=min(first,second);
               if(both>=mx-mn)
               {
                  //cout<<both<<" "<<mx<<" "<<mn<<endl;
                  both-=(mx-mn);
                  if(both%2==0)
                  {
                     cnt++;
                     break;
                  }
               }
            }
          }
          if(cnt>0)
             break;
       }
       if(cnt>0)
          cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;
    }
}
