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
        
        ll n;
        
        cin>>n;
        
        ll arr[n];
        
        loop (i, n){
        	cin>>arr[i];
		}
		
		int values[2];
		
		memset(values, 0, sizeof(values));
		
		bool poss = true; 
		
		loop (i, n) {
			
			if (arr[i] == 5) {
				values[0]++;
			}
			
			if (arr[i] == 10) {
				if (values[0] >= 1) {
					values[0]--;
					values[1]++;
				} else {
					poss = false;
					break;
				}
			}
			
			if (arr[i] == 15) {
				if (values[1] >= 1) {
					values[1]--;
				} else if (values[0] >= 2){
					values[0] -= 2;
				} else {
					poss = false;
					break;
				}
			}
		}
		
		if (poss) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
    }
}
