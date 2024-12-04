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
        int a, b;
        in a >> b;
        if (a % 2 != 0)
        {
            int tem1=a/2;
            int tem=(a+1)/2;
            if(tem1==b||tem==b)
            {
                pr "YES\n";
            }else
            {
                pr "NO\n";
            }
        }
        else
        {
            if (a/2 == b)
            {
                pr "YES\n";
            }
            else
            {
                pr "NO\n";
            }
        }
    }
    return 0;
}

// Arundhoti Kar@
// From PUST