using namespace std;
#include <stdio.h>
#include <iostream>

int main(){
	
	int a1;
	
	cin>>a1;
	
	if(a1<100){
		cout<<99;
	} else {
		int a2=a1;
		int temp=a1;
		a2=(((a2/100)+1)*100)-1;
		
		a1=((a1/100)*100)-1;
		
		if(temp-a1 < a2-temp){
			cout<<a1;
		} else{
			cout<<a2;
		}
	}
	
	return 0;
}
