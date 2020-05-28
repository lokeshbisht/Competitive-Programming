#include <bits/stdc++.h>

typedef long long ll;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int test;
    
    cin>>test;
    
    while (test--) {
    	
    	string s;
    	
    	cin>>s;
    	
    	int ways = 0;
    	
    	int len = s.length();
    	
    	for (int i = 1; i <= (len / 2  - 1); i++) {
    		string t11 = "";
    		string t12 = "";
    		
    		string t21 = "";
    		string t22 = "";
    		
    		t11 = s.substr(0, i);
    		t12 = s.substr(i, i);
    		
    		if (t11 == t12) {
    			int j = (len / 2 - i);
    			t21 = s.substr(2 * i, j);
    			t22 = s.substr(2 * i + j, j);
    			
    			if (t21 == t22) {
    				ways++;
				}
			}
		}
    	cout<<ways<<endl;
    }
}
