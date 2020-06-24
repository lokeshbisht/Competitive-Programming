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
    
    ll n;
    
    cin>>n;
    
    char arr[27];
    
    for (int i = 0; i < 26; i++) {
    	arr[i] = i + 'a';
	}
	
	vector<char> ch;
	
	while (n > 0) {
		n--;
		ch.insert(ch.begin(), arr[(n % 26)]);
		
		n /= 26;
	}
	for (auto c : ch) {
		cout<<c;
	}
}
