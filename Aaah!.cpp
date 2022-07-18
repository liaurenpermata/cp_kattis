using namespace std;
#include <iostream>
#include <stdio.h>

int main() {
	int i,j=0,k=0;
	string input1, input2;
	cin>>input1;
	cin>>input2;
	
	for(i=0;i<input1.length();i++){
		if(i==0){
			continue;
		} else {
			input1[i]==input1[i-1];
			j++;
		}
	}
	
	for(i=0;i<input2.length();i++){
		if(i==0){
			continue;
		} else {
			input2[i]==input2[i-1];
			k++;
		}
	}
	
	if(j>=k){
		cout<<"go\n";
	} else{
		cout<<"no\n";
	}
	
	return 0;
}
