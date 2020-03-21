#include <bits/stdc++.h>


#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)

using namespace std;

vector<string> allSubstrings(string str) {
	vector<string> subs;
	
	int n = str.length();
	
	for (int i = 0; i < n; i++) {
		
		for (int j = 1; j <= n - i; j++) {
			subs.push_back(str.substr(i, j));
		}
	}
	
	return subs;
}

int main() {
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	string str;
	
	cin>>str;
	
	vector<string> subs = allSubstrings(str);
	
	for (auto s : subs) {
		cout<<s<<endl;
	}
	return 0;
}
