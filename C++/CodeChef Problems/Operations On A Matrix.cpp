#include <bits/stdc++.h>

typedef long long ll;

#define loop(i,n) for(ll i = 0; i < n; i++)
#define loopr(i,x,y) for(ll i = x; i < y; i++)

using namespace std;

int main() {
	
	int test;
	
	cin>>test;
	
	while (test--) {
		
		int n, m, q;
		
		cin>>n>>m>>q;
		
		int x, y;
		int numRow[n+1] = {0};
		int numCol[m+1] = {0};
		
		for (int i = 0; i < q; i++) {
			cin>>x>>y;
			
			numRow[x]++;
			numCol[y]++;
		}
		
		ll count = 0;
		
		ll rowOdd = 0;
		ll rowEven = 0;
		ll colOdd = 0;
		ll colEven = 0;
		
		for (int i = 1; i <= n; i++) {
			if (numRow[i] % 2 == 0) {
				rowEven++;
			} else {
				rowOdd++;
			}
		}
		
		for (int i = 1; i <= m; i++) {
			if (numCol[i] % 2 == 0) {
				colEven++;
			} else {
				colOdd++;
			}
		}
		
		count += rowEven * colOdd;
		count += colEven * rowOdd;
		
		cout<<count<<endl;
	}
	return 0;
}
