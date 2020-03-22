#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int test;
	
	cin>>test;
	
	for (int i = 0; i < test; i++) {
		
		int n;
		
		cin>>n;
		
		string S, R;
		
		cin>>S>>R;
		
		int oneS = 0, zeroS = 0, oneR = 0, zeroR = 0;
		
		for (int j = 0; j < S.length(); j++) {
			if (S[j] == '1') {
				oneS++;
			} else {
				zeroS++;
			}
		}
		
		for (int j = 0; j < R.length(); j++) {
			if (R[j] == '1') {
				oneR++;
			} else {
				zeroR++;
			}
		}
		
		if (oneS == oneR && zeroS == zeroR) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
}
