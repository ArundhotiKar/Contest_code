#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    in  t;
    
    while (t--) {
        ll n, x;
        in n >> x;
        
        vector<pair<ll, ll>> coins(n);
        vector<ll>ans;
        for (int i = 0; i < n; i++) {
            in coins[i].first; 
        }
        for (int i = 0; i < n; i++) {
            in coins[i].second; 
        }

        
        for(auto i: coins)
        {
            
            ans.push_back(i.first*i.second);
        }
        srt(ans);
        ll sum=0,cnt=0;
        for(int i=ans.size()-1; i>=0; i--)
        {
           sum+=ans[i];
           cnt++;
           if(sum>=x)
           {
              break;
           }
          
        }
        if(sum<x)
        {
            pr "-1\n";
        }else
        {
            pr cnt nl;
        }


        

        
    }

    return 0;
}

//Arundhoti Kar@
//From PUST