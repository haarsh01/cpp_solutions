#include <iostream>
using namespace std;

void sortZeroesAndOne(int input[], int n){
	int nextZero = 0;
	for(int i=0; i<n; i++){
		if (input[i] == 0){
			int temp = input[nextZero];
			input[nextZero] = input[i];
			input[i] = temp;
			nextZero++;
		}
	}
}




int main(){
	int n;
	cin >> n;
	int *input = new int[n];
	for(int i=0; i<n; i++){
		cin >> input[i];
	}
	sortZeroesAndOne(input, n);
	for(int i=0; i<n; i++){
		cout << input[i] << " ";
	}
	cout << endl;
}