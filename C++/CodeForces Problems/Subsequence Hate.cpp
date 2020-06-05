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
    
    ll test;
    
    cin>>test;
    
    while (test--) {
    	
    	string s;
    	
    	cin>>s;
    	
    	ll ones = 0;
    	ll zeroes = 0;
    	
    	for (char c : s) {
    		if (c == '0') {
    			zeroes++;
			} else {
				ones++;
			}
		}
		
		ll ans = min(ones, zeroes);
		
		ll onesCount = 0;
		ll zeroesCount = 0;
		
		for (char c : s) {
			
			onesCount += (c == '1');
			ones -= (c == '1');
			zeroesCount += (c == '0');
			zeroes -= (c == '0');
			
			ans = min(ans, onesCount + zeroes);
			ans = min(ans, zeroesCount + ones);
		}
		
		cout<<ans<<endl;
	}
}


