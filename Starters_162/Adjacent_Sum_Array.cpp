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
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> b(n - 1),a(n);;
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }

      srt(b);
       
        for (ll a1 = 1; a1 <= b[0]; a1++) {
            bool valid = true;
            a[0] = a1;

            
            for (int i = 1; i < n; i++) {
                a[i] = b[i - 1] - a[i - 1];
                if (a[i] <= 0) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                for (int i = 0; i < n; i++) {
                    cout << a[i] << " ";
                }
                cout << "\n";
                break; 
            }
        }
    }

    return 0;
}

//Arundhoti Kar@
//From PUST