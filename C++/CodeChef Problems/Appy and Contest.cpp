#include <bits/stdc++.h>

using namespace std;

int findLcm(long a, long b) {
	
	int max = (a > b) ? a : b;

    do {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        else {
        	++max;
		}
    } while (true);
    
    return max;
}

int main() {
	
long test;
long n, a, b, k;
int lcm;

cin>>test;

for(int i = 0 ; i < test ; i++){
	cin>>n>>a>>b>>k;
	
	lcm = findLcm(a, b);
	
	if((n/a) + (n/b) - (2 * (n/lcm)) >= k)
		printf("Win\n");
	else
		printf("Lose\n");
}
	return 0;
}

