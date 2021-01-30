#include <iostream>
using namespace std;

void pushZeroesEnd(int input[] , int size){
	int nonZero =0;
	for(int i=0; i<size; i++){
		if (input[i] != 0){
			int tmp = input[i];
			input[i] = input[nonZero];
			input[nonZero] = tmp;
			nonZero++;
		}
	}
}


int main() {
	int t; // t denotes the test cases .
	cin >>  t;
	while(t--){
		int size;
		cin >> size;
		int *input = new int[size];
		for (int  i =0; i < size; i++){
			cin >> input[i];
		}
		pushZeroesEnd(input, size);
		for(int i=0; i<size; i++){
			cout << input[i] << " ";
		}
		cout <<  endl;
		
	}
	return 0;
		
}