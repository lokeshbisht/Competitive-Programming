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
       	
       	ll n, m;
       	
       	cin>>n>>m;
       	
       	string s[n];
       	
       	loop (i, n) {
       		cin>>s[i];
		}
		
		string ans = s[0];
		bool poss = true;
		
		for (int i = 0; i < m; i++) {
			char curr = ans[i];
			
			for (char c = 'a'; c <= 'z'; c++) {
				ans[i] = c;
				poss = true;
				for (int j = 0; j < n; j++) {
					ll diff = 0;
					
					for (int k = 0; k < m; k++) {
						if (s[j][k] != ans[k]) {
							diff++;
						}
						if (diff > 1) {
							poss = false;
							break;
						}
					}
				}
				
				if (poss) {
					break;
				}
			}
			if (poss) {
				break;
			}
			ans[i] = curr;
		}
		
		if (poss) {
			cout<<ans<<endl;
		} else {
			cout<<-1<<endl;
		}
    }
}
