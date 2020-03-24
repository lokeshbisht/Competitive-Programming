#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int test;
    
    cin>>test;
    
    while (test--) {
 		
		 int n, m;
		 
		 cin>>n>>m;
		 
		 int cats[n] = {0};
		 int can[m];
		 bool fair = true;
		 
		 for (int i = 0; i < m; i++) {
		 	cin>>can[i];
		 }
		 
		 int cur;
		 for (int i = 0; i < m; i++) {
		 	
			cur = can[i] - 1;
		 	
		 	for (int j = 0; j < n; j++) {
		 		if (j == cur) {
		 			continue;
				 }
				 
				 if (cats[j] < cats[cur]) {
				 	fair = false;
					break;
				 }
			 }
			if (!fair) {
				break;
			}
		 	cats[can[i] - 1]++;
		 }
		 
		 if (fair) {
		 	cout<<"YES"<<endl;
		 } else {
		 	cout<<"NO"<<endl;
		 }
    }
    return 0;
}
