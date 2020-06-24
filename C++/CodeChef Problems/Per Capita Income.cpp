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

const int N = 200005;

vector<ll> ans;
ll visited[N];
ll aban[N];
multimap<double, ll, greater<double>> pci;
vector<double> values;
double curr;
vector<ll> edges[N + 1];

void dfs(ll node) {
	
	if (aban[node]) {
		return;
	}
	
	if (visited[node]) {
		return;
	}
	
	if (values[node - 1] >= curr) {
		ans.push_back(node);
		visited[node] = 1;
		
		for (auto i : edges[node]) {
			dfs(i);
		}
	} else {
		visited[node] = 1;
		aban[node] = 1;
	}
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test;
    
    cin>>test;
    
    while (test--) {
    	
    	memset(visited, 0, sizeof(visited));
		memset(aban, 0, sizeof(aban));
		pci.clear();
		values.clear();
		ans.clear();
		
		for (auto& v : edges) {
 	  		v.clear();
		}
		
    	ll n, m;
    	
    	cin>>n>>m;
    	
    	double income[n];
    	
    	loop (i, n) {
    		cin>>income[i];
		}
		
		double popu[n];
		
		loop (i, n) {
			cin>>popu[i];
		}
		
		loop (i, n) {
			double cu = income[i] / popu[i];
			values.push_back(cu);
			pci.insert({cu, i + 1});
		}
		
		loop (i, m) {
			ll x, y;
			
			cin>>x>>y;
			
			edges[x].push_back(y);
			edges[y].push_back(x);
		}
		
		curr = pci.begin()->first;
		vector<ll> res;
		
		for (auto it : pci) {
			if (it.first == curr) {
				ans.clear();
				dfs(it.second);
				
				if (ans.size() >= res.size()) {
					res = ans;
				}
			} else if (it.first < curr) {
				break;
			}
		}
		
		cout<<res.size()<<endl;
		
		for (auto i : res) {
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
