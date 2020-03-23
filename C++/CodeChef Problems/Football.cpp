#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int test;
	
	cin>>test;
	
	while (test--) {
		
		int n;
		
		cin>>n;
		
		int goals[n], fouls[n], points[n];
		
		for (int i = 0; i < n; i++) {
			cin>>goals[i];
		}
		
		for (int i = 0; i < n; i++) {
			cin>>fouls[i];
		}
		
		for (int i = 0; i < n; i++) {
			
			points[i] = (goals[i] * 20) - (fouls[i] * 10);
			
			if (points[i] < 0) {
				points[i] = 0;
			}
		}
		
		sort(points, points + n, greater<int>());
		
		cout<<points[0]<<endl;;
		
		
	}
}
