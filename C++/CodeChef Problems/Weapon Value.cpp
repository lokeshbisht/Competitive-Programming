#include <bits/stdc++.h>

typedef long long ll;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)

using namespace std;

int main() {
    
    int test;
    
    cin>>test;
    
    while (test--) {
        
        int n;
        
        cin>>n;
        
        string weapons[n];
        
        loop(i, n) {
            cin>>weapons[i];
        }
            
        ll arr[10] = {0};
        
        loop(i, n) {
            
            loop(j, 10) {
                
                if (weapons[i][j] == '1') {
                    arr[j]++;
                }
            }
        }
        
        int count = 0;
        
        loop(i, 10) {
            
            if (arr[i] % 2 != 0) {
                count++;
            }
        }
        
        cout<<count<<endl;
    }
    
    return 0;
}
