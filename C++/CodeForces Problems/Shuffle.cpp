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
    	
    	ll n, x, m;
    	
    	cin>>n>>x>>m;
    	
    	ll ans = 0;
    	
    	ll l, u;
    	
    	ll lower = x;
		ll upper = x;
    	
    	loop (i, m) {
    		cin>>l>>u;
    		
    		if (x >= l && x <= u) {
    			if (l < lower) {
    				lower = l;
				}
				if (u > upper) {
					upper = u;
				}
			}
			
			if (u >= lower && u <= upper || l >= lower && l <= upper) {
				if (l < lower) {
    				lower = l;
				}
				if (u > upper) {
					upper = u;
				}
			}
		}
		ans = upper - lower + 1;
		
		cout<<ans<<endl;
	}
}


