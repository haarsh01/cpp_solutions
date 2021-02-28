#include <iostream>
#include <cstring>
using namespace std;


int length (char input[]){
	int l=0;
	for(int i=0; input[i] != '\0'; i++){
		l++;
	}
	return l;
}


void revereWords(char input[], int i, int j){
	while (i<j){
		char temp = input[i];
		input[i] = input[j];
		input[j] = temp;
		i++;
		j--;
	}
}




void reverseWordWie(char input[]){
	int len = length(input);
	int i=0; j = len-1;
	while (i<j){
		char temp = input[i];
		input[i] = input[j];
		input[j] = temp;
		i++;
		j--;
	}
	int start =0; end =0;
	for(i=0; i<len; i++){
		if (input[i] == ' '){
			end = i-1;
			revereWordWie(input,start,end);
			start=i+1;
			end = i+1;
		}
	}
	end = i-1;
}	revereWordWie(input,start,end);




int main () {
	char input(100);
	cin >> input;
	cin.getline(input,100);
	revereWordWie(input);
	cout << input << endl;
}