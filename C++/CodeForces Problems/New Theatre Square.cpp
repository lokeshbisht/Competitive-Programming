#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef vector<string> VS;
typedef vector<P> VP;
typedef vector<V> VV;
typedef map<ll,ll> MP;
typedef set<ll> SET;
typedef multiset<ll> MSET;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)
#define pb push_back;
#define mp make_pair;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int test;
    
    cin>>test;
    
    while (test--) {
        ll n, m, x, y;
        
        cin>>n>>m>>x>>y;
        
        char arr[n][m];
        
        loop (i, n) {
        	loop (j, m) {
        		cin>>arr[i][j];
			}
		}
		
		bool isBetter = false;
		
		if (2 * x < y) {
			isBetter = true;
		}
		
		ll ans = 0;
		
		for (ll i = 0; i < n; i++) {
			for (ll j = 0; j < m; j++) {
				if (arr[i][j] == '.') {
					if (isBetter) {
						ans += x;
					} else if (j + 1 < m && arr[i][j + 1] == '.') {
						j++;
						ans += y;
					} else {
						ans += x;
					}
				}
			}
		}
		cout<<ans<<endl;
    }
}
