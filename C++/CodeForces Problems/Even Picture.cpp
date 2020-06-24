#include <bits/stdc++.h>

using namespace std;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)
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
    
    vector<pair<int, int>> ans;
    
    ans.push_back({0, 0});
    ans.push_back({0, 1});
    ans.push_back({1, 0});
    ans.push_back({1, 1});
    
    while (n--) {
    	ll xx = ans.back().first;
    	ll yy = ans.back().second;
    	
    	ans.push_back({xx, yy + 1});
    	ans.push_back({xx + 1, yy});
    	ans.push_back({xx + 1, yy + 1});
	}
	
	cout<<ans.size()<<endl;
	
	for (auto it : ans){
		cout<<it.first<<" "<<it.second<<endl;
	}
    
}
