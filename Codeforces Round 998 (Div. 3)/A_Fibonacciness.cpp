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
int calculateFibonacciness(int a1, int a2, int a3, int a4, int a5) {
    int count = 0;
    if (a3 == a1 + a2) count++;
    if (a4 == a2 + a3) count++;
    if (a5 == a3 + a4) count++;
    return count;
}


int main()
{   
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
   int t;
    in t;
    while (t--) {
        int a1, a2, a4, a5;
        in a1 >> a2 >> a4 >> a5;

        
        vtr poss = {a1 + a2, a4 - a2, a5 - a4};
        int maxF = 0;

        for (int a3 : poss) {
            maxF = max(maxF, calculateFibonacciness(a1, a2, a3, a4, a5));
        }

        pr maxF<<"\n";
    }
  return 0;
}

//Arundhoti Kar@
//From PUST