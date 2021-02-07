#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
void removeAllOccurrencesOfChar(char input[], char c){
	int j = 0;
	int i =0;
	int len = strlen(input);
	while (i < len){
		if(input[i] != c){
			swap(input[i], input[j]);
			i++;
			j++;
		}
		else{
			input[i] = '\0';
			i++;

		}
	}
}


int main (){
	int size = 1e6;
	char str[size];
	cin.getline(str,size);
	char c;
	cin >> c;
	removeAllOccurrencesOfChar(str,c);
	cout << str;
}