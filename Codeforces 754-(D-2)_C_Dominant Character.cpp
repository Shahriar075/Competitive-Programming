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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0,sb=0,three=0,four=0,cnt2=0,cnt3=0,cnt4=0;
        string s,s1,s2,s3,ns;
        cin>>n>>s;
        s1="abbacca";
        s2="accabba";
        vector<string> s4={"aba","aca","abca","acba"};
        for(ll i=0;i<n;i++)
        {
            s3=s.substr(i,7);
            ns=s.substr(i,3);
            string ns2=s.substr(i,4);
            for(int i=0;i<s4.size();i++)
            {
                if(ns==s4[i])
                {
                    three++;
                    break;
                }
                if(ns2==s4[i])
                {
                    four++;
                    break;
                }
            }
            if(s3==s1 || s3==s2)
                sb++;
            if(s[i]=='a' && s[i+1]=='a')
                cnt2++;
            if(s[i]=='a' && s[i+1]=='a' && s[i+2]=='a')
                cnt3++;
             if(s[i]=='a' && s[i+1]=='a' && s[i+2]=='a' && s[i+3]=='a')
                cnt4++;
        }
        if(cnt2>0)
            cout<<2<<endl;
        else if(three>0)
            cout<<3<<endl;
        else if(four>0)
            cout<<4<<endl;
        else if(cnt3>0)
            cout<<3<<endl;
        else if(cnt4>0)
             cout<<4<<endl;
        else if(sb>0)
            cout<<7<<endl;
        else
           cout<<-1<<endl;
       }
}
