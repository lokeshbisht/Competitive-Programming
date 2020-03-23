#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int test;
	
	cin>>test;
	
	while (test--) {
		
		string str;
		
		cin>>str;
		
		int len = str.length();
		
		int ones = 0, zeroes = 0;
		
		for (int i = 0; i < len; i++) {
		
			if (str[i] == '1') {
				ones++;
			} else {
				zeroes++;
			}
		}
		
		if (ones % 2 == 0) {
			cout<<"LOSE"<<endl;
		} else {
			cout<<"WIN"<<endl;
		}
	}
	return 0;
}
