#include <iostream>
using namespace std;




void pushZerosEnd( int *input, int n){
	int nonZero =0;
	for (int i=0; i < n; i++){
		if (input[i] !=0){
			int temp = input[i];
			input[i] = input[nonZero];
			input[nonZero] = temp;
			nonZero++;
		}
	}
}


int main(){
	int n;
	cin >> n;
	int input[100];
	for(int i=0; i <n; i++){
		cin >> input[i];
	}
	pushZerosEnd(input, n);
	for(int i=0; i< n; i++){
		cout << input[i] << " ";
	}
	cout << endl;
}