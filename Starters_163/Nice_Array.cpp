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
    in t;
    
    while (t--) {
        int n;
        ll k;
        in n >> k;
        
        vector<ll> a(n);
        ll cnt = 0, cnt1=0,sum = 0;
        
        for (int i = 0; i < n; i++) {
            in a[i];
            sum += (a[i] / k);  
            
            
            if (a[i] % k != 0) {
                if(a[i] < 0)
                {
                    cnt++;
                } else
                {
                    cnt1++;
                }
            }
        }
        
        
        if (k == 1) {
            if (sum == 0)
                pr "YES\n";
            else
                pr "NO\n";
            continue;
        }

        if(sum==0)
        {
             pr "YES\n";
             continue;
        }
        if(sum<0)
        {
            if(abs(sum)<=cnt1)
            {
                pr "YES\n";
            }else
            {
                pr "NO\n";
            }
        }else
        {
            if(sum<=cnt)
            {
                pr "YES\n";
            }else
            {
                pr "NO\n";
            }
        }
        // if (sum == 0 || abs(sum) <= cnt) {
        //     pr "YES\n";
        // } else {
        //     pr "NO\n";
        // }
    }
    
    return 0;
}


//Arundhoti Kar@
//From PUST