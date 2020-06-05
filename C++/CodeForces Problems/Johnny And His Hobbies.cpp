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
        
        ll n;
        
        cin>>n;
        
        vector<ll> in;
        
        ll val;
        loop (i, n) {
			cin>>val;
			
			in.push_back(val);
		}
		
		sort(in.begin(), in.end());
		
		vector<ll> samp;
		
		ll ans = -1;
		
		for (ll i = 1; i <= 1024; i++) {
			samp.clear();
			for (int j = 0; j < n; j++) {
				samp.push_back(in[j] ^ i);
			}
			sort(samp.begin(), samp.end());
			
			if (samp == in) {
				ans = i;
				break;
			}
		}
		cout<<ans<<endl;
    }
}
