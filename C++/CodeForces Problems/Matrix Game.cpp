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
    
    ll test;
    
    cin>>test;
    
    while (test--) {
    	ll n, m;
    	
    	cin>>n>>m;
    	
    	ll arr[n][m];
    	
    	loop (i, n) {
    		loop (j, m) {
    			cin>>arr[i][j];
			}
		}
		
		ll rows[n];
		ll cols[m];
		
		memset(rows, 0, sizeof(rows));
		memset(cols, 0, sizeof(cols));
		
		loop (i, n) {
    		loop (j, m) {
    			if (arr[i][j] == 1) {
    				rows[i] = 1;
    				cols[j] = 1;
				}
			}
		}
		
		ll countR = 0;
		ll countC = 0;
		
		loop (i, n) {
			if (rows[i] == 0) {
				countR++;
			}
		}
		
		loop (i, m) {
			if (cols[i] == 0) {
				countC++;
			}
		}
		
		ll val = (countC > countR) ? countR : countC;
		
		if (val % 2 == 0) {
			cout<<"Vivek"<<endl;
		} else {
			cout<<"Ashish"<<endl;
		}
	}
}
