#include <iostream>
#include <cstring>
using namespace std;

int length(char str[]){
	int count = 0;
	for(int i=0; str[i] != '\0'; i++){
		count++;
	}
	return count;
}

bool checkPalindrome(char str[]){
	for(int i=0; i<=length(str)/2; i++){
		if(str[i] != str[length(str) - 1 - i]){
			return false;
		}
	}
	return true;
}



int main () {
	int size = 1e6;
	char str[size];
	cin >> str;
	cout << (checkPalindrome(str) ? "true": "false");
}