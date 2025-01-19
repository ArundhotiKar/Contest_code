#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
const ll MOD=1e9+7;
ll power(ll x, ll y)
{
  ll ans=1%MOD;
  while(y)
 {
    if(y&1)
    {
       ans=(1LL * ans % MOD * x %MOD) % MOD;
    }
    x=1LL * x * x % MOD ;
    y >>= 1; 
 }
  return ans;
}
int main()
{   
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
   int t;
   in t;
   while(t--)
   {
      int n;
      in n;
      vtr a(n);
      ll mx=-1;
      for(int i=0; i<n; i++)
      {
        in a[i];
        mx=max(a[i],mx);
      }
      if(a[0]==mx)
      {
        pr "NO\n";
        continue;
      }
      for(int i=0; i<n-1; i++)
      {
        if(a[i]<=a[i+1])
        {
            ll tem=min(a[i],a[i+1]);
            a[i]-=tem;
            a[i+1]-=tem;
        }
      }
      if(is_sorted(a.begin(),a.end()))
      {
        pr "YES\n";
      }else
      {
        pr "NO\n";
      }
   }
  return 0;
}

//Arundhoti Kar@
//From PUST