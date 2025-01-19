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
    int n,m;
    in n>>m;
    vector<vector<ll>>a;
    for(int i=0; i<n; i++)
    {
        vtr v;
        for(int j=0; j<m; j++)
        {
            int aa;
            in aa;
            v.push_back(aa);
        }
        srt(v);
        a.push_back(v);
    }

   bool ok=true;
    for(auto i: a)
    {
         for(int j=0; j<m-1; j++)
         {
            if((i[j+1]-i[j])!=n)
            {
                ok =false;
                pr "-1\n";
                break;
            }
         }
         if(!ok)
         break;
    }
    if(ok)
    {
        vtr ans;
        map<int,int>mp;
        int cnt=1;
        for(auto i: a)
        {
            ans.push_back(i[0]);
            mp[i[0]]=cnt;
            cnt++;
        }
        srt(ans);
        for(auto i: ans)
        {
            pr mp[i]<<" ";
        }
        pr "\n";

    }
    
  } 
  return 0;
}

//Arundhoti Kar@
//From PUST