#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int test;
	
	cin>>test;
	
	while (test--) {
		
		long n, k;
		
		cin>>n>>k;
		
		bool different = true;
		
		if (k == 1) {
			different = false;
		} else if (k == n) {
		    different = true;
		} else {
			
			int time = 0;
			
			for (int i = 0; i < 2; i++) {
				if (n % k == 0) {
					time++;
				}
				if (time == 2) {
					different = false;
					break;
				}
				n /= k;
			}
		}
		
		if (different) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
