#include <iostream>
using namespace std;

int main() {
	
int test;
int n;
int a[100], d[100];
int value;

cin>>test;

for(int i = 0 ; i < test ; i++){
	value = 0;
	cin>>n;
	
	for(int j = 0 ; j < n ; j++)
		cin>>a[j];
	for(int j = 0 ; j < n ; j++)
		cin>>d[j];
	
	for(int i = 0 ; i < n ; i++){
		if(i == 0){
			if((a[n-1] + a[i+1]) < d[i]){
			    if(d[i] > value){
				    value = d[i];
			}
			}
		}
		else if(i == n-1){
			if((a[i-1] + a[0]) < d[i]){
				if(d[i] > value){
				    value = d[i];
			}
			}
		}
		else{
			if((a[i-1] + a[i+1]) < d[i]){
					if(d[i] > value){
				    value = d[i];
			}
			}
		}
	}
	if(value == 0)
		cout<<"-1"<<endl;
	else 
		cout<<value<<endl;
	
}
	return 0;
}

