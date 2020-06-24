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
       	ll n;
       	
       	cin>>n;
       	
       	string s[n];
       	
       	loop (i, n) {
       		cin>>s[i];
		}
		
		bool poss = true;
		
		for (int i = n - 2; i >= 0; i--) {
			for (int j = n - 2; j >= 0; j--) {
				if (s[i][j] == '1' && s[i + 1][j] != '1' && s[i][j + 1] != '1') {
					poss = false;
				}
			}
		}
		
		cout<<(poss ? "YES" : "NO")<<endl;
    }
}
