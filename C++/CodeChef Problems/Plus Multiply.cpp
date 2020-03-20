#include <bits/stdc++.h>

typedef long long ll;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)

using namespace std;
  
int main() {
    
    long long test;
    
    cin>>test;
    
    while (test--) {
        
        long long n;
        
        cin>>n;
        
        long long arr[n];
        
        loop (i, n) {
            cin>>arr[i];
        }
        
        long long ze = 0;
        long long tw = 0;
        
        loop (i, n) {
            if (arr[i] == 0) {
                ze++;
            }
            if (arr[i] == 2) {
                tw++;
            }
        }
        
        long long pairs = 0;
        
        pairs += (ze * (ze - 1)) / 2;
        
        pairs += (tw * (tw - 1)) / 2;
        
        cout<<pairs<<endl;
    }
}
