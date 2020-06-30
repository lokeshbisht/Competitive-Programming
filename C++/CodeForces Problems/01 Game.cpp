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
    	string s;
    	
    	cin>>s;
    	
    	ll zeroes = 0;
    	ll ones = 0;
    	
    	for (int i = 0; i < s.size(); i++) {
			if (s[i] == '0') {
				zeroes++;
			} else {
				ones++;
			}
		}
		
		if (zeroes % 2 != 0 && ones >= zeroes || ones % 2 != 0 && zeroes >= ones) {
			cout<<"DA"<<endl;
		} else {
			cout<<"NET"<<endl;
		}
	}
}
