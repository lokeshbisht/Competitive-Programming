#include <bits/stdc++.h>

using namespace std;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)

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
       	
       	ll ans = n;
       	
       	for (ll i = 1; i <= sqrt(n); i++) {
       		if (n % i == 0)	{
       			if (i <= k) {
       				ans = min(ans, n / i);	
				}
				
				if (n / i <= k) {
					ans = min(ans, i);
				}
			}
		}
		
		cout<<ans<<endl;
    }
}
