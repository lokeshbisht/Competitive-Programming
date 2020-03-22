#include <bits/stdc++.h>

using namespace std;

long even;
long odd;
set<long> sequence;

bool getParity(long n) {
	
	bool parity = 0;
	
	while (n) {
		parity = !parity;
		n = n & (n - 1);
	}
	return parity;
}

void printValues(long value) {
	
	bool parity;

	if (sequence.find(value) == sequence.end()) {
		
		if (sequence.empty()){
			sequence.insert(value);
		}
		
		set<long> tempSequence;
		int oddCount = 0;
		int evenCount = 0;
		for (auto i = sequence.begin(); i != sequence.end(); i++) {
			tempSequence.insert(value ^ *i);	
		}
		
		for (auto i = tempSequence.begin(); i != tempSequence.end(); i++) {
			
			if (sequence.find(*i) != sequence.end()) {
				if (getParity(*i)) {
					oddCount++;
				} else {
					evenCount++;
				}
			}
		}
		sequence.insert(tempSequence.begin(), tempSequence.end());
		
		parity = getParity(value);
		
		if (parity) {
			long oddTemp;
		
			oddTemp = odd + even + 1;
			even += odd;
			odd = oddTemp;
		} else {
			even += even;
			even++;
			odd += odd;
		}
		odd -= oddCount;
		even -= evenCount;
	}
	cout<<even<<" "<<odd<<endl;	
}

int main() {
	
	int t;
	
	cin>>t;
	
	for (int i = 0; i < t; i++) {
		
		int queries;
		
		cin>>queries;
		
		sequence.clear();
		even = 0;
		odd = 0;
		
		for (int j = 0; j < queries; j++) {
			
			long x;
			
			cin>>x;
			
			printValues(x);
		}
	}
}
