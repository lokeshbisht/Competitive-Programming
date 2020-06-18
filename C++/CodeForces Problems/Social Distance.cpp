#include <bits/stdc++.h>

using namespace std;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)
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
    	ll n, k;
    	
    	cin>>n>>k;
    	
    	string s;
    	
    	cin>>s;
    	
    	ll ans = 0;
    	
    	ll zero = k;
    	
    	bool allZero = true;
    	
    	loop (i, n) {
    		if (s[i] == '1') {
    			allZero = false;
    			break;
			}
		}
		
		if (allZero) {
			ans = ceil(float(n) / float(k + 1));
			
			cout<<ans<<endl;
			
			continue;
		}
		
    	loop (i, n) {
    		if (s[i] == '1') {
    			zero = 0;
			}
    		if (s[i] == '0') {
    			zero++;
			}
			
			if (zero == (2 * k) + 1) {
				zero = k;
				ans++;
			}
		}
		
		if (zero >= k + 1) {
			ans++;
		}
		
		cout<<ans<<endl;
	}
}


