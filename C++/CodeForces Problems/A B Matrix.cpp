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
       	
       	ll n, m, a, b;
       	
       	cin>>n>>m>>a>>b;
       	
       	if (n * a != m * b) {
       		cout<<"NO"<<endl;
			continue;	
		}
		
		ll shift;
		
		for (shift = 1; shift < m; shift++) {
			if ((shift * n) % m == 0) {
				break;
			}
		}
		
		ll arr[n][m];
		
		memset(arr, 0, sizeof(arr));
		
		for (int i = 0, dx = 0; i < n; i++, dx += shift) {
			for (int j = 0; j < a; j++) {
				arr[i][(j + dx) % m] = 1;
			}
		}
		
		cout<<"YES"<<endl;
		
		loop (i, n) {
			loop (j, m) {
				cout<<arr[i][j];
			}
			cout<<endl;
		}
    }
}
