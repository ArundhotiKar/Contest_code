#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    in t;
    while (t--)
    {
        int n, m;
        in n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            in a[i];
        for (int i = 0; i < m; i++)
            in b[i];

        int ans=0;
        for(int i=0; i<m; i++)
        {
            if(a[b[i]-1]==0)
            {
                ans++;
            }else
            {
                a[b[i]-1]--;
            }
        }
        pr ans nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST