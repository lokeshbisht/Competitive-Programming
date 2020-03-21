#include <bits/stdc++.h>

using namespace std;

vector<string> findCom(string input) {
	
	string val[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	
	vector<string> ans;
	queue<string> st;
	st.push("");
	
	while (!st.empty()) {
		string s = st.front();
		st.pop();
		
		if (s.length() == input.length()) {
			ans.push_back(s);
		} else {
			for (auto letter : val[(int)(input[s.length()] - 48) - 2]) {
				st.push(s + letter);
			}
		}
	}
	
	return ans;
}

int main () {
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	string input;
	
	cin>>input;
	
	vector<string> ans = findCom(input);
	
	for (auto word : ans) {
		cout<<word<<endl;
	}
	
	return 0;
}
