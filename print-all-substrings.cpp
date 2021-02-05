#include <iostream>
using namespace std;

void printAllSubstrings (char input[]){
	for (int j=0; input[j] != '\0'; j++){
		for(int k=j; input[k] !='\0'; k++){
			int start = j, end = k;
			char output[100];
			int x =0;
			for (int i=start; i <= end; i++){
				output[x] = input[i];
				x++;
			}
			output[x] = '\0';
			cout << output << endl;
		}
	}
}


int main(){
	char input[100];
	cin >> input;

	printAllSubstrings(input);
}