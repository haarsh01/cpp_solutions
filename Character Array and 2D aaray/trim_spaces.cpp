#include <iostream>
using namespace std;

void  trimSpaces(char input[]){
	int j = 0;
	for(int i = 0 ; input[i] != '\0' ; i++){
		if (input[i] != ' '){
			input[j] = input[i];
			j++;
		}
	}
	input[j] = '\0';
	cout << input << endl;
}



int main(){
	char input[100];
	cin.getline(input,100);
	trimSpaces(input);
}