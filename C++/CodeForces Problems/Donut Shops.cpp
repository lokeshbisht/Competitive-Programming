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
    
    ll test;
    
    cin>>test;
    
    while (test--) {
    	ll a, b, c;
    	
    	cin>>a>>b>>c;
    	
    	ll fi;
    	ll se;
    	
    	if (a >= c) {
    		fi = -1;
		} else {
			fi = 1;
		}
		
		if (a * b <= c) {
			se = -1;
		} else {
			se = b;
		}
		
		cout<<fi<<" "<<se<<endl;
	}
}
