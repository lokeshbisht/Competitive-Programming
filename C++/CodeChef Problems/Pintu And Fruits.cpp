#include <bits/stdc++.h>

typedef long long ll;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int test;
    
    cin>>test;
    
    while (test--) {
        int n, m;
        
        cin>>n>>m;
        
        int basket[n], cost[n];
        
        loop (i, n) {
            cin>>basket[i];
        }
        
        
        loop (i, n) {
            cin>>cost[i];
        }
        
        int ans = 99999999;
        
        for (int i = 1; i <= m; i++) {
        	
        	int sum = 0;
        	
        	bool present = false;
        	
        	loop (j, n) {
        		
        		if (basket[j] == i) {
        			present = true;
        			sum += cost[j];
				}
			}
			
			if (present) {
				ans = min(ans, sum);
			}
        }
        cout<<ans<<endl;
    }
}
