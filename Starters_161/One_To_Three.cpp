#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
int main()
{   
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  int t;
  in t;
  while(t--)
  {
    ll n;
    in n;
    vector<int>a(n);
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        in a[i];
    }
    int cnt=0;
    for(int i=1; i<n-1; i++)
    {
        if(a[i]==3)
        {
             
            if(a[i-1]+a[i+1]==4)
            {
                a[i]=1;
                if(a[i-1]==3)
                {
                    i-=2;
                }
                
            }
            
        }
    }
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
    }
    pr sum nl;
  } 
  return 0;
}

//Arundhoti Kar@
//From PUST