using namespace std;
#include <iostream>
#include <stdio.h>
#include <cctype>

int main() {
	
	char alphabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	string changeAlphabet[26]={"@", "8", "(","|)","3","#","6","[-]","|","_|","|<","1","[]\\/[]","[]\\[]","0","|D","(,)","|Z","$","']['","|_|","\\/","\\/\\/","}{","`/","2"};
	
	string textInput;
	
	bool check;
	
	getline(cin, textInput);
	
	for(int i=0;i<textInput.length();i++){
		check=true;
		textInput[i] = tolower(textInput[i]);
		for(int j=0;j<26;j++){
			if(textInput[i] == alphabet[j]){
				cout<<changeAlphabet[j];
				check=false;
			}
		}
		if(check){
				cout<<textInput[i];
			}
	}
	
	return 0;
}
