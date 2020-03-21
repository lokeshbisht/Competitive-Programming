#include <bits/stdc++.h>

using namespace std;
    
bool checkTop(stack<char> bracketsStack, char c) {
    	
    if (c == ')') {
    	if (bracketsStack.empty() || bracketsStack.top() != '(') {
    		return false;
		}
	}
		
	if (c == '}') {
		if (bracketsStack.empty() || bracketsStack.top() != '{') {
    		return false;
		}
	}
		
	if (c == ']') {
		if (bracketsStack.empty() || bracketsStack.top() != '[') {
    		return false;
		}
	}
		
	return true;
}

bool isValid(string s) {
    	
    stack<char> bracketsStack;
    	
    for (char c : s) {
    		
    	if (c == '(' || c == '[' || c == '{') {
    		bracketsStack.push(c);
		} else {
			bool isValid = checkTop(bracketsStack, c);
			
			if (isValid) {
				bracketsStack.pop();
			} else {
				return isValid;
			}
		}
	}
		
	if (bracketsStack.empty()) {
		return true;
	} else {
		return false;
	}
}

int main() {
	string s;
	
	cin>>s;
	
	bool result = isValid(s);
	
	cout << boolalpha << result;
	
	return 0;
}

