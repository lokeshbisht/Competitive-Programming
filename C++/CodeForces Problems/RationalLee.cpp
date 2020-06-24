#include <bits/stdc++.h>

using namespace std;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)
#define push_back pb
#define mp make_pair

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
    	ll n, k;
    	
    	cin>>n>>k;
    	
    	ll nrr[n];
    	ll krr[k];
    	
    	loop (i, n) {
    		cin>>nrr[i];
		}
		
		loop (i, k) {
			cin>>krr[i];
		}
		
		sort(nrr, nrr + n, greater<ll>());
		sort(krr, krr + k);
		
		ll h[k][2];
		
		memset(h, 0, sizeof(h));
		
		ll ans = 0;
		
		int i = 0;
		
		for (int j = 0; j < k; j++) {
			h[j][0] = nrr[i];
			if (krr[j] == 1) {
				h[j][1] = nrr[i];
			}
			krr[j]--;
			i++;
		}
		
		int j = 0;
		for (; i < n;) {
			while (krr[j] > 0) {
				if (krr[j] == 1) {
					h[j][1] = nrr[i];
				}
				krr[j]--;
				i++;
			}
			j++;
		}
		
		loop (i, k) {
			ans += (h[i][0] + h[i][1]);
		}
		
		cout<<ans<<endl;
	}
}
