#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
void solve()
{
   int n;
   in n;
   int x[2] = {0}; 
   
   while (n--) {
      char ch;
      in ch;
      x[ch - 'A']++;  
      if (x[1 - (ch - 'A')])  
         x[1 - (ch - 'A')]--;
   }
   
   pr x[0] + x[1] nl;  
}
int main()
{   
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  int t;
  in t;
  while(t--)
  {
    solve();
  } 
  return 0;
}

//Arundhoti Kar@
//From PUST