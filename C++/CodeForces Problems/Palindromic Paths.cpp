#include <bits/stdc++.h>

using namespace std;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)
#define push_back pb ;
#define mp make_pair;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef vector<string> VS;
typedef vector<P> VP;
typedef vector<V> VV;
typedef map<ll,ll> MP;
typedef set<ll> SET;
typedef multiset<ll> MSET;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    
    cin>>test;
    
    while (test--) {
    	
    	ll n, m;
    	
    	cin>>n>>m;
    	
    	ll arr[n + 1][m + 1];
    	
    	ll distVal[n * m + 1][2];
    	
    	memset(distVal, 0, sizeof(distVal));
    	
    	for (int i = 1; i <= n; i++) {
    		for (int j = 1; j <= m; j++) {
    			cin>>arr[i][j];
			}
		}
		
		ll ans = 0;
		
		ll maxDist = 0;
		
		for (int i = 1; i <= n; i++) {
    		for (int j = 1; j <= m; j++) {
    			ll currDistStart = abs(1 - i) + abs(1 - j);
    			ll currDistEnd = abs(n - i) + abs(m - j);
    			
    			if (currDistStart == currDistEnd) {
    				continue;
				}    		
				ll dist = (currDistStart <= currDistEnd) ? currDistStart : currDistEnd;
    			
    			if (dist > maxDist) {
    				maxDist = dist;
				}
				if (arr[i][j] == 1) {
					distVal[dist][1]++;
				} else {
					distVal[dist][0]++;
				}
			}
		}
		
		for (int i = 0; i <= maxDist; i++) {
			if (distVal[i][0] == 0 || distVal[i][1] == 0) {
				continue;
			} else {
				if (distVal[i][0] <= distVal[i][1]) {
					ans += distVal[i][0];
				} else {
					ans += distVal[i][1];
				}
			}
		}
		
		cout<<ans<<endl;
	}
}


